#include <Geode/modify/CCKeyboardDispatcher.hpp>
#include "menu.h"

class $modify(cocos2d::CCKeyboardDispatcher) 
{
	bool dispatchKeyboardMSG(cocos2d::enumKeyCodes key, bool isKeyDown, bool isKeyRepeat, double idk)
	{
		if (key == cocos2d::enumKeyCodes::KEY_LeftControl && isKeyDown == true)
		{
			menu::config::GetConfig().m_showmenu = !menu::config::GetConfig().m_showmenu;
		}
		return CCKeyboardDispatcher::dispatchKeyboardMSG(key, isKeyDown, isKeyRepeat, idk);
	}
};