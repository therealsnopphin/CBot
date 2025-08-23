#include "pch.h"

class $modify(GameManager)
{
	void updateCustomFPS()
	{
		GameManager::updateCustomFPS();
		CBot::GameManager::fps = m_customFPSTarget;
		CBot::m_tps = CBot::GameManager::fps;
	}
};