#include <Geode/modify/PlayerObject.hpp>
#include "utilities/SimpleFMOD.h"
#include "utilities/fast_random.h"
#include "clickpackhandler.h"
#include "menu.h"
#include <print>

class $modify(PlayerObject)
{
	bool pushButton(PlayerButton playerButton)
	{
		if (PlayLayer::get() != nullptr)
		{
			menu::config& Config = menu::config::GetConfig();
			clickpackhandler& handler = clickpackhandler::Get();
			SimpleFMOD& SFmod = SimpleFMOD::GetInstance();

			if (Config.m_selected_player2_clickpack_index != 0 && this->m_isSecondPlayer == true)
			{
				float RandomVolume = fast_random::randomfloat(Config.m_minvolume, Config.m_maxvolume);

				ClickType currentClicktype = handler.CheckClickType(Config.m_player2_softclicks, true);

				int RandomClick = fast_random::randomint(0, handler.m_Player2CountClickAudios[currentClicktype]);
				const std::string& currentclickpath = handler.m_Player2ClickAudios[{currentClicktype, RandomClick}].clickpathfilename;

				SFmod.playSound(currentclickpath.c_str(), RandomVolume);
			}

			if (Config.m_selected_player1_clickpack_index != 0 && this->m_isSecondPlayer == false)
			{
				float RandomVolume = fast_random::randomfloat(Config.m_minvolume, Config.m_maxvolume);

				ClickType currentClicktype = handler.CheckClickType(Config.m_player1_softclicks, true);
				int RandomClick = fast_random::randomint(0, handler.m_Player1CountClickAudios[currentClicktype]);
			    const std::string& currentclickpath = handler.m_Player1ClickAudios[{currentClicktype, RandomClick}].clickpathfilename;

				SFmod.playSound(currentclickpath.c_str(), RandomVolume);
			}
		}

		return PlayerObject::pushButton(playerButton);

	}

	bool releaseButton(PlayerButton playerButton)
	{
		if (PlayLayer::get() != nullptr)
		{
			menu::config& Config = menu::config::GetConfig();
			clickpackhandler& handler = clickpackhandler::Get();
			SimpleFMOD& SFmod = SimpleFMOD::GetInstance();

			if (Config.m_selected_player2_clickpack_index != 0 && this->m_isSecondPlayer == true)
			{
				float RandomVolume = fast_random::randomfloat(Config.m_minvolume, Config.m_maxvolume);

				ClickType currentClicktype = handler.CheckClickType(Config.m_player2_softclicks, false);

				int RandomClick = fast_random::randomint(0, handler.m_Player2CountClickAudios[currentClicktype]);
				const std::string& currentclickpath = handler.m_Player2ClickAudios[{currentClicktype, RandomClick}].clickpathfilename;

				SFmod.playSound(currentclickpath.c_str(), RandomVolume);
			}

			if (Config.m_selected_player1_clickpack_index != 0 && this->m_isSecondPlayer == false)
			{
				float RandomVolume = fast_random::randomfloat(Config.m_minvolume, Config.m_maxvolume);

				ClickType currentClicktype = handler.CheckClickType(Config.m_player1_softclicks, false);
				int RandomClick = fast_random::randomint(0, handler.m_Player1CountClickAudios[currentClicktype]);
				const std::string& currentclickpath = handler.m_Player1ClickAudios[{currentClicktype, RandomClick}].clickpathfilename;

				SFmod.playSound(currentclickpath.c_str(), RandomVolume);
			}
		}

		return PlayerObject::releaseButton(playerButton);
	}

};