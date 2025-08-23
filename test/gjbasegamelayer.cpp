#include "pch.h"
class $modify(GJBaseGameLayer)
{
    float getCustomDelta(float dt, float tps, bool applyExtraDelta = true) {
        if (applyExtraDelta && m_resumeTimer > 0)
        {
            --m_resumeTimer;
            dt = 0.0;
        }

        float fixed_dt = 1.f / tps;

        auto timestep = std::min(m_gameState.m_timeWarp, 1.f) * fixed_dt;
        auto total_dt = dt + m_extraDelta;
        auto steps = std::round(total_dt / timestep);
        auto new_dt = steps * timestep;
        if (applyExtraDelta) m_extraDelta = total_dt - new_dt;

        return static_cast<float>(new_dt);
    }

    float getModifiedDelta(float dt) {
        if (CBot::m_enabletpsbypass == true)
        {
            return getCustomDelta(dt, CBot::m_tps);
        }

        return GJBaseGameLayer::getModifiedDelta(dt);
    }

    void processCommands(float dt) 
    {
        PlayLayer* pl = PlayLayer::get();

        if (!pl) {
            return GJBaseGameLayer::processCommands(dt);
        }

        *(uintptr_t*)((char*)geode::base::get() + 0x6a4e20) = CBot::m_seed;

        GJBaseGameLayer::processCommands(dt);
    }

	void handleButton(bool down, int button, bool isPlayer1)
	{
		if (button == 1)
		{
			input::m_playerinput = true;
		}
			
		return GJBaseGameLayer::handleButton(down, button, isPlayer1);
	}
};
