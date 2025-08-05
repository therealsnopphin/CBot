#include "pch.h"

namespace CBot
{
	ClickType CheckClickType(const std::string& ClickPack,bool SoftClick, bool HardClick, bool IsHolding)
	{
		static float PreviousTime = 0;
		float CurrentTime = 0.0f;
		
		bool hasClickpacks = !gui::m_Player1ClickAudios.empty() || !gui::m_Player2ClickAudios.empty();
		if (gui::m_gameSync && hasClickpacks)
		{
			auto* director = cocos2d::CCDirector::sharedDirector();
			if (director)
			{
				float deltaTime = director->getDeltaTime();
				CurrentTime = deltaTime;
			}
			else
			{
				DWORD timelocal = timeGetTime();
				CurrentTime = (timelocal - PreviousTime) / 1000.0f;
				PreviousTime = timelocal;
			}
		}
		else
		{
			DWORD timelocal = timeGetTime();
			CurrentTime = (timelocal - PreviousTime) / 1000.0f;
			PreviousTime = timelocal;
		}

		if (CurrentTime < random::floatRandom(gui::m_minsoftClickstime, gui::m_maxsoftClickstime) && SoftClick)
		{
			if (IsHolding)
				return ClickType::SoftClick;
			else
				return ClickType::SoftRelease;
		}

		if (CurrentTime > random::floatRandom(gui::m_minhardClickstime, gui::m_maxhardClickstime) && HardClick)
		{
			if (IsHolding)
				return ClickType::HardClick;
			else
				return ClickType::HardRelease;
		}

		if (IsHolding)
			return ClickType::NormalClick;
		else
			return ClickType::NormalRelease;
	}
}