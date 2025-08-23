#pragma once

namespace std {
	template <>
	struct hash<ClickAudioType> {
		std::size_t operator()(const ClickAudioType& t) const noexcept {
			return (static_cast<std::size_t>(t.clickType) << 1) ^ std::hash<int>()(t.click);
		}
	};

	template <>
	struct equal_to<ClickAudioType> {
		bool operator()(const ClickAudioType& lhs, const ClickAudioType& rhs) const noexcept {
			return lhs.clickType == rhs.clickType && lhs.click == rhs.click;
		}
	};
}

namespace CBot
{

	namespace gui
	{
		void initializeImGui();
		void renderImGui();
	}


	inline std::unordered_map<ClickAudioType, ClickAudio> m_Player1ClickAudios;
	inline std::unordered_map<ClickType, size_t> m_Player1SizeClickAudios;

	inline std::unordered_map<ClickAudioType, ClickAudio> m_Player2ClickAudios;
	inline std::unordered_map<ClickType, size_t> m_Player2SizeClickAudios;

	inline std::vector<const char*> m_strstates = { "None",
		"Recording",
		"PlayBack"
	};
	inline state m_currentstate = state::None;
	inline std::string m_currentMacroname = "";

    inline size_t m_seed = 1;

	inline bool m_ignoreinput = true;
	inline macro m_macro;

	inline bool m_enabletpsbypass = true;
	inline float m_tps = 0;
	inline bool m_enablespeedhack = true;
    inline bool m_physicsaccuracy = false;
	inline float m_speed = 1.0f;
	inline bool m_show = true;

    struct KeyEntry {
        const char* name;
        int value;
    };

    static KeyEntry keyEntries[] = {
        { "KEY_Unknown", -1 },
        { "KEY_None", 0 },
        { "KEY_Backspace", 8 },
        { "KEY_Tab", 9 },
        { "KEY_Clear", 12 },
        { "KEY_Enter", 13 },
        { "KEY_Shift", 16 },
        { "KEY_Control", 17 },
        { "KEY_Alt", 18 },
        { "KEY_Pause", 19 },
        { "KEY_CapsLock", 20 },
        { "KEY_Escape", 27 },
        { "KEY_Space", 32 },
        { "KEY_PageUp", 33 },
        { "KEY_PageDown", 34 },
        { "KEY_End", 35 },
        { "KEY_Home", 36 },
        { "KEY_Left", 37 },
        { "KEY_Up", 38 },
        { "KEY_Right", 39 },
        { "KEY_Down", 40 },
        { "KEY_Select", 41 },
        { "KEY_Print", 42 },
        { "KEY_Execute", 43 },
        { "KEY_PrintScreen", 44 },
        { "KEY_Insert", 45 },
        { "KEY_Delete", 46 },
        { "KEY_Help", 47 },
        { "KEY_Zero", 48 },
        { "KEY_One", 49 },
        { "KEY_Two", 50 },
        { "KEY_Three", 51 },
        { "KEY_Four", 52 },
        { "KEY_Five", 53 },
        { "KEY_Six", 54 },
        { "KEY_Seven", 55 },
        { "KEY_Eight", 56 },
        { "KEY_Nine", 57 },
        { "KEY_A", 65 },
        { "KEY_B", 66 },
        { "KEY_C", 67 },
        { "KEY_D", 68 },
        { "KEY_E", 69 },
        { "KEY_F", 70 },
        { "KEY_G", 71 },
        { "KEY_H", 72 },
        { "KEY_I", 73 },
        { "KEY_J", 74 },
        { "KEY_K", 75 },
        { "KEY_L", 76 },
        { "KEY_M", 77 },
        { "KEY_N", 78 },
        { "KEY_O", 79 },
        { "KEY_P", 80 },
        { "KEY_Q", 81 },
        { "KEY_R", 82 },
        { "KEY_S", 83 },
        { "KEY_T", 84 },
        { "KEY_U", 85 },
        { "KEY_V", 86 },
        { "KEY_W", 87 },
        { "KEY_X", 88 },
        { "KEY_Y", 89 },
        { "KEY_Z", 90 },
        { "KEY_LeftWindowsKey", 91 },
        { "KEY_RightWindowsKey", 92 },
        { "KEY_ApplicationsKey", 93 },
        { "KEY_Sleep", 95 },
        { "KEY_NumPad0", 96 },
        { "KEY_NumPad1", 97 },
        { "KEY_NumPad2", 98 },
        { "KEY_NumPad3", 99 },
        { "KEY_NumPad4", 100 },
        { "KEY_NumPad5", 101 },
        { "KEY_NumPad6", 102 },
        { "KEY_NumPad7", 103 },
        { "KEY_NumPad8", 104 },
        { "KEY_NumPad9", 105 },
        { "KEY_Multiply", 106 },
        { "KEY_Add", 107 },
        { "KEY_Seperator", 108 },
        { "KEY_Subtract", 109 },
        { "KEY_Decimal", 110 },
        { "KEY_Divide", 111 },
        { "KEY_F1", 112 },
        { "KEY_F2", 113 },
        { "KEY_F3", 114 },
        { "KEY_F4", 115 },
        { "KEY_F5", 116 },
        { "KEY_F6", 117 },
        { "KEY_F7", 118 },
        { "KEY_F8", 119 },
        { "KEY_F9", 120 },
        { "KEY_F10", 121 },
        { "KEY_F11", 122 },
        { "KEY_F12", 123 },
        { "KEY_F13", 124 },
        { "KEY_F14", 125 },
        { "KEY_F15", 126 },
        { "KEY_F16", 127 },
        { "KEY_F17", 128 },
        { "KEY_F18", 129 },
        { "KEY_F19", 130 },
        { "KEY_F20", 131 },
        { "KEY_F21", 132 },
        { "KEY_F22", 133 },
        { "KEY_F23", 134 },
        { "KEY_F24", 135 },
        { "KEY_Numlock", 144 },
        { "KEY_ScrollLock", 145 },
        { "KEY_LeftShift", 160 },
        { "KEY_RightShift", 161 },
        { "KEY_LeftControl", 162 },
        { "KEY_RightContol", 163 },
        { "KEY_LeftMenu", 164 },
        { "KEY_RightMenu", 165 },
        { "KEY_BrowserBack", 166 },
        { "KEY_BrowserForward", 167 },
        { "KEY_BrowserRefresh", 168 },
        { "KEY_BrowserStop", 169 },
        { "KEY_BrowserSearch", 170 },
        { "KEY_BrowserFavorites", 171 },
        { "KEY_BrowserHome", 172 },
        { "KEY_VolumeMute", 173 },
        { "KEY_VolumeDown", 174 },
        { "KEY_VolumeUp", 175 },
        { "KEY_NextTrack", 176 },
        { "KEY_PreviousTrack", 177 },
        { "KEY_StopMedia", 178 },
        { "KEY_PlayPause", 179 },
        { "KEY_LaunchMail", 180 },
        { "KEY_SelectMedia", 181 },
        { "KEY_LaunchApp1", 182 },
        { "KEY_LaunchApp2", 183 },
        { "KEY_OEM1", 186 },
        { "KEY_OEMPlus", 184 },
        { "KEY_OEMComma", 188 },
        { "KEY_OEMMinus", 189 },
        { "KEY_OEMPeriod", 190 },
        { "KEY_OEM2", 191 },
        { "KEY_OEM3", 192 },
        { "KEY_OEM4", 219 },
        { "KEY_OEM5", 220 },
        { "KEY_OEM6", 221 },
        { "KEY_OEM7", 222 },
        { "KEY_OEM8", 223 },
        { "KEY_OEM102", 226 },
        { "KEY_Process", 229 },
        { "KEY_Packet", 231 },
        { "KEY_Attn", 246 },
        { "KEY_CrSel", 247 },
        { "KEY_ExSel", 248 },
        { "KEY_EraseEOF", 249 },
        { "KEY_Play", 250 },
        { "KEY_Zoom", 251 },
        { "KEY_PA1", 253 },
        { "KEY_OEMClear", 254 },
        { "KEY_ArrowUp", 283 },
        { "KEY_ArrowDown", 284 },
        { "KEY_ArrowLeft", 285 },
        { "KEY_ArrowRight", 286 },
        { "CONTROLLER_A", 1001 },
        { "CONTROLLER_B", 1003 },
        { "CONTROLLER_Y", 1005 },
        { "CONTROLLER_X", 1007 },
        { "CONTROLLER_Start", 1009 },
        { "CONTROLLER_Back", 1011 },
        { "CONTROLLER_RB", 1013 },
        { "CONTROLLER_LB", 1015 },
        { "CONTROLLER_RT", 1017 },
        { "CONTROLLER_LT", 1019 },
        { "CONTROLLER_Up", 1021 },
        { "CONTROLLER_Down", 1023 },
        { "CONTROLLER_Left", 1025 },
        { "CONTROLLER_Right", 1027 },
        { "CONTROLLER_LTHUMBSTICK_UP", 1029 },
        { "CONTROLLER_LTHUMBSTICK_DOWN", 1031 },
        { "CONTROLLER_LTHUMBSTICK_LEFT", 1033 },
        { "CONTROLLER_LTHUMBSTICK_RIGHT", 1035 },
        { "CONTROLLER_RTHUMBSTICK_UP", 1037 },
        { "CONTROLLER_RTHUMBSTICK_DOWN", 1039 },
        { "CONTROLLER_RTHUMBSTICK_LEFT", 1041 },
        { "CONTROLLER_RTHUMBSTICK_RIGHT", 1043 },
        { "KEY_GraveAccent", 4096 },
        { "KEY_OEMEqual", 4097 },
        { "KEY_LeftBracket", 4098 },
        { "KEY_RightBracket", 4099 },
        { "KEY_Backslash", 4100 },
        { "KEY_Semicolon", 4101 },
        { "KEY_Apostrophe", 4102 },
        { "KEY_Slash", 4103 },
        { "KEY_Equal", 4104 },
        { "KEY_NumEnter", 4105 },
        { "KEY_World1", 4106 },
        { "KEY_World2", 4107 },
        { "MOUSE_4", 4352 },
        { "MOUSE_5", 4353 },
        { "MOUSE_6", 4354 },
        { "MOUSE_7", 4355 },
        { "MOUSE_8", 4356 },
    };

    inline int m_selectedKeyIndex = 0;
	inline int m_selectedKey = 16;

	inline FMOD::Channel* m_whiteplayer1noisechannel = nullptr;
	inline FMOD::Sound* m_whiteplayer1noisesound = nullptr;

	inline FMOD::Channel* m_whiteplayer2noisechannel = nullptr;
	inline FMOD::Sound* m_whiteplayer2noisesound = nullptr;

	inline std::string m_player1_clickpack_path = "";
	inline std::string m_player2_clickpack_path = "";
	//player1
	inline bool m_player1_softclicks = false;
	inline bool m_player1_hardclicks = false;
	inline bool m_player1_whitenoise = false;
	inline bool m_player1_softclicksclickpack = true;
	inline bool m_player1_hardclicksclickpack = true;
	inline bool m_player1_whitenoiseclickpack = true;
	//player2
	inline bool m_player2_softclicks = false;
	inline bool m_player2_hardclicks = false;
	inline bool m_player2_softclicksclickpack = true;
	inline bool m_player2_whitenoise = false;
	inline bool m_player2_hardclicksclickpack = true;
	inline bool m_player2_whitenoiseclickpack = true;

	inline float m_whitenoisevolume = 1.0f;
	//If folder soft clicks for example doesn´t exists, then the user cannot change the soft clicks  
	inline float m_minVolume = 1.0f;
	inline float m_maxVolume = 1.0f;
	inline float m_minPitch = 1.0f;
	inline float m_maxPitch = 1.0f;
	inline float m_minsoftClickstime = 0.1f;
	inline float m_maxsoftClickstime = 0.1f;
	inline float m_minhardClickstime = 2.0f;
	inline float m_maxhardClickstime = 2.0f;
	inline bool m_randomPanning = false;

	inline std::string m_Currentversion = "3.9";
	inline std::string m_Title = "ClickBot " + m_Currentversion;
	inline bool m_updatefound = false;
};