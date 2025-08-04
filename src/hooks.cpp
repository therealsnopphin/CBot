#include <imgui-cocos.hpp>

#include <Geode/Geode.hpp>
#include <Geode/modify/CCMouseDispatcher.hpp>
#include <Geode/modify/CCIMEDispatcher.hpp>
#include <Geode/modify/CCTouchDispatcher.hpp>
#include <Geode/modify/CCKeyboardDispatcher.hpp>

#include <imgui.h>

using namespace geode::prelude;

#ifndef GEODE_IS_IOS
class $modify(CCMouseDispatcher) {
	bool dispatchScrollMSG(float y, float x) {
		if (!ImGuiCocos::get().isInitialized())
			return CCMouseDispatcher::dispatchScrollMSG(y, x);

		auto& io = ImGui::GetIO();
		static constexpr float scrollMult = 1.f / 10.f;
		io.AddMouseWheelEvent(x * scrollMult, -y * scrollMult);

		if (!io.WantCaptureMouse) {
			return CCMouseDispatcher::dispatchScrollMSG(y, x);
		}
		return true;
	}
};
#endif

// 2.2 adds some new arguments to the dispatchers
#if GEODE_COMP_GD_VERSION >= 22000
	#define IF_2_2(...) __VA_ARGS__
#else
	#define IF_2_2(...)
#endif

#if GEODE_COMP_GD_VERSION >= 22070
	#define IF_2_207(...) __VA_ARGS__
#else
	#define IF_2_207(...)
#endif

class $modify(CCIMEDispatcher) {
	void dispatchInsertText(const char* text, int len IF_2_2(, enumKeyCodes keys)) {
		if (!ImGuiCocos::get().isInitialized())
			return CCIMEDispatcher::dispatchInsertText(text, len IF_2_2(, keys));

		auto& io = ImGui::GetIO();
		if (!io.WantCaptureKeyboard) {
			CCIMEDispatcher::dispatchInsertText(text, len IF_2_2(, keys));
		}
		std::string str(text, len);
		io.AddInputCharactersUTF8(str.c_str());
	}

	void dispatchDeleteBackward() {
		if (!ImGuiCocos::get().isInitialized())
			return CCIMEDispatcher::dispatchDeleteBackward();

		auto& io = ImGui::GetIO();
		if (!io.WantCaptureKeyboard) {
			CCIMEDispatcher::dispatchDeleteBackward();
		}
		// is this really how youre supposed to do this
		io.AddKeyEvent(ImGuiKey_Backspace, true);
		io.AddKeyEvent(ImGuiKey_Backspace, false);
	}
};

ImGuiKey cocosToImGuiKey(cocos2d::enumKeyCodes key) {
	if (key >= KEY_A && key <= KEY_Z) {
		return static_cast<ImGuiKey>(ImGuiKey_A + (key - KEY_A));
	}
	if (key >= KEY_Zero && key <= KEY_Nine) {
		return static_cast<ImGuiKey>(ImGuiKey_0 + (key - KEY_Zero));
	}
	switch (key) {
		case KEY_Up: return ImGuiKey_UpArrow;
		case KEY_Down: return ImGuiKey_DownArrow;
		case KEY_Left: return ImGuiKey_LeftArrow;
		case KEY_Right: return ImGuiKey_RightArrow;

		case KEY_Control: return ImGuiKey_ModCtrl;
		case KEY_Shift: return ImGuiKey_ModShift;
		case KEY_Alt: return ImGuiKey_ModAlt;
		case KEY_Enter: return ImGuiKey_Enter;

		case KEY_Home: return ImGuiKey_Home;
		case KEY_End: return ImGuiKey_End;
		case KEY_Delete: return ImGuiKey_Delete;

		default: return ImGuiKey_None;
	}
}

bool shouldBlockInput() {
	auto& inst = ImGuiCocos::get();
	return inst.isVisible() && inst.getInputMode() == ImGuiCocos::InputMode::Blocking;
}

#ifndef GEODE_IS_IOS
class $modify(CCKeyboardDispatcher) {
	bool dispatchKeyboardMSG(enumKeyCodes key, bool down IF_2_2(, bool repeat)) {
		if (!ImGuiCocos::get().isInitialized())
			return CCKeyboardDispatcher::dispatchKeyboardMSG(key, down IF_2_2(, repeat));

		const bool shouldEatInput = ImGui::GetIO().WantCaptureKeyboard || shouldBlockInput();
		if (shouldEatInput || !down) {
			const auto imKey = cocosToImGuiKey(key);
			if (imKey != ImGuiKey_None) {
				ImGui::GetIO().AddKeyEvent(imKey, down);
			}
		}
		if (shouldEatInput) {
			return false;
		} else {
			return CCKeyboardDispatcher::dispatchKeyboardMSG(key, down IF_2_2(, repeat));
		}
	}
};
#endif

class $modify(CCTouchDispatcher) {
	void touches(CCSet* touches, CCEvent* event, unsigned int type) {
		if (!ImGuiCocos::get().isInitialized() || !touches)
			return CCTouchDispatcher::touches(touches, event, type);

		auto& io = ImGui::GetIO();
		auto* touch = static_cast<CCTouch*>(touches->anyObject());

		if (!touch) return CCTouchDispatcher::touches(touches, event, type);

		const auto pos = ImGuiCocos::cocosToFrame(touch->getLocation());
		io.AddMousePosEvent(pos.x, pos.y);

		if (io.WantCaptureMouse || shouldBlockInput()) {
			if (type == CCTOUCHBEGAN) {
				io.AddMouseButtonEvent(0, true);
			} else if (type == CCTOUCHENDED || type == CCTOUCHCANCELLED) {
				io.AddMouseButtonEvent(0, false);
			}
			if (type == CCTOUCHMOVED) {
				CCTouchDispatcher::touches(touches, event, CCTOUCHCANCELLED);
			}
		} else {
			if (type != CCTOUCHMOVED) {
				io.AddMouseButtonEvent(0, false);
			}
			CCTouchDispatcher::touches(touches, event, type);
		}
	}
};

// need imgui to be drawn inbetween glClear and swapBuffers:
// drawScene() {
//   glClear();
//   draw current scene();
//   <- here!
//   swapBuffers();
// }
// swapBuffers on android and macos doesnt do anything, so hooking it might not work,
// and because it doesnt do anything just drawing imgui at the end of drawScene works fine

#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)

#include <Geode/modify/CCEGLView.hpp>

class $modify(CCEGLView) {
	void swapBuffers() {
		if (ImGuiCocos::get().isInitialized())
			ImGuiCocos::get().drawFrame();

		CCEGLView::swapBuffers();
	}

#ifdef GEODE_IS_WINDOWS
	void toggleFullScreen(bool value IF_2_2(, bool borderless) IF_2_207(, bool fix)) {
		if (!ImGuiCocos::get().isInitialized())
			return CCEGLView::toggleFullScreen(value IF_2_2(, borderless) IF_2_207(, fix));

		ImGuiCocos::get().destroy();
		CCEGLView::toggleFullScreen(value IF_2_2(, borderless) IF_2_207(, fix));
		ImGuiCocos::get().setup();
	}
#endif
};

#else

#include <Geode/modify/CCDirector.hpp>

class $modify(CCDirector) {
	void drawScene() {
		CCDirector::drawScene();
		if (ImGuiCocos::get().isInitialized())
			ImGuiCocos::get().drawFrame();
	}
};

#endif
