#include "pch.h"

class $modify(GJBaseGameLayer)
{
	
	void handleButton(bool down, int button, bool isPlayer1)
	{
		
		if (button == 1)
		{
			input::m_isplayer1input = isPlayer1;
			input::m_playerinput = true;
		}
			
		return GJBaseGameLayer::handleButton(down, button, isPlayer1);
	}
};
