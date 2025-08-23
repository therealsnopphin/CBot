#include "pch.h"

class $modify(PlayLayer)
{
	//When the player dies in practice mode, it erases previouses clicks
	void loadFromCheckpoint(CheckpointObject* cp)
	{
		if (CBot::m_currentstate == CBot::state::Recording)
		{
			int CheckPointFrame = cp->m_gameState.m_levelTime * (double)CBot::m_tps;

			std::erase_if(CBot::m_macro.m_inputactions, [CheckPointFrame](const CBot::action& a) {
				return a.frame >= CheckPointFrame;
				});

			std::erase_if(CBot::m_macro.m_physicsactions, [CheckPointFrame](const CBot::physicsaction& a) {
				return a.frame >= CheckPointFrame;
				});
		}

		PlayLayer::loadFromCheckpoint(cp);
	}

	void onEnterTransitionDidFinish()
	{
		CBot::m_currentMacroname = this->m_level->m_levelName;

		CBot::m_macro.m_physicsactions.reserve(this->m_gameState.m_levelTime * CBot::GameManager::fps);

		PlayLayer::onEnterTransitionDidFinish();
	}
	void resetLevel()
	{
		if (CBot::m_currentstate == CBot::state::Recording)
		{
			if (m_checkpointArray->count() == 0)
			{
				CBot::m_macro.m_inputactions.clear();
				CBot::m_macro.m_physicsactions.clear();
			}
		}

		PlayLayer::resetLevel();

		*(uintptr_t*)((char*)geode::base::get() + 0x6a4e20) = CBot::m_seed;
	}

	void levelComplete()
	{
		if (CBot::m_currentMacroname.empty() == true)
		{
			CBot::m_currentMacroname = this->m_level->m_levelName;
		}

		CBot::m_macro.save(CBot::m_currentMacroname);

		if (CBot::m_currentstate == CBot::state::Recording)
		{
			CBot::m_currentstate = CBot::state::PlayBack;
		}

		PlayLayer::levelComplete();
	}
};