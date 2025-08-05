#include "pch.h"

class $modify(PlayerObject)
{
	
	bool pushButton(PlayerButton playerButton)
	{
		if (input::m_playerinput == true)
		{
			if (gui::m_player2_clickpack_path != "None" && this->m_isSecondPlayer == true)
			{
				float RandomVolume = random::floatRandom(gui::m_minVolume, gui::m_maxVolume);
				float RandomPitch = random::floatRandom(gui::m_minPitch, gui::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(gui::m_player2_clickpack_path, gui::m_player2_softclicks, gui::m_player2_hardclicks, true);
				std::string currentclickpath = gui::m_Player2ClickAudios[{currentClicktype, random::intRandom(0, gui::m_Player2SizeClickAudios[currentClicktype])}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			if (gui::m_player1_clickpack_path != "None" && this->m_isSecondPlayer == false)
			{
				float RandomVolume = random::floatRandom(gui::m_minVolume, gui::m_maxVolume);
				float RandomPitch = random::floatRandom(gui::m_minPitch, gui::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(gui::m_player1_clickpack_path, gui::m_player1_softclicks, gui::m_player1_hardclicks, true);
				std::string currentclickpath = gui::m_Player1ClickAudios[{currentClicktype, random::intRandom(0, gui::m_Player1SizeClickAudios[currentClicktype])}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			input::m_playerinput = false;
		}

		return PlayerObject::pushButton(playerButton);
	}

	bool releaseButton(PlayerButton playerButton)
	{
		if (input::m_playerinput == true)
		{
			if (gui::m_player2_clickpack_path != "None" && this->m_isSecondPlayer == true)
			{
				float RandomVolume = random::floatRandom(gui::m_minVolume, gui::m_maxVolume);
				float RandomPitch = random::floatRandom(gui::m_minPitch, gui::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(gui::m_player2_clickpack_path, gui::m_player2_softclicks, gui::m_player2_hardclicks, false);
				std::string currentclickpath = gui::m_Player2ClickAudios[{currentClicktype, random::intRandom(0, gui::m_Player2SizeClickAudios[currentClicktype])}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			if (gui::m_player1_clickpack_path != "None" && this->m_isSecondPlayer == false)
			{
				float RandomVolume = random::floatRandom(gui::m_minVolume, gui::m_maxVolume);
				float RandomPitch = random::floatRandom(gui::m_minPitch, gui::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(gui::m_player1_clickpack_path, gui::m_player1_softclicks, gui::m_player1_hardclicks, false);
				std::string currentclickpath = gui::m_Player1ClickAudios[{currentClicktype, random::intRandom(0, gui::m_Player1SizeClickAudios[currentClicktype])}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			input::m_playerinput = false;
		}

		return PlayerObject::releaseButton(playerButton);
	}
		
};
