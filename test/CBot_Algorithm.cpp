#include "pch.h"

namespace CBot
{
	ClickType CheckClickType(const std::string& ClickPack,bool SoftClick, bool HardClick, bool IsHolding)
	{
		static float PreviousTime = 0;
		DWORD timelocal = timeGetTime();
		float CurrentTime = (timelocal - PreviousTime) / 1000.f;
		PreviousTime = timelocal;

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