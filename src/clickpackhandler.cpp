#include "utilities/SimpleFMOD.h"
#include <Geode/modify/PlayLayer.hpp>
#include "menu.h"
#include "utilities/fast_random.h"
#include "clickpackhandler.h"

void clickpackhandler::LoadCurrentPlayer1Clickpack(const std::string& clickpackpath)
{
	menu::config& Config = menu::config::GetConfig();
	Config.m_player1_softclicks = false;

	std::unordered_map<ClickType, std::string> Player1ClickTypesFolder = { { ClickType::NormalClick, clickpackpath + "/clicks/" }, { ClickType::NormalRelease, clickpackpath + "/releases/" },
{ ClickType::SoftClick, clickpackpath + "/softclicks/" }, { ClickType::SoftRelease, clickpackpath + "/softreleases/" } };

	SimpleFMOD& SFmod = SimpleFMOD::GetInstance();
	m_Player1ClickAudios.clear();
	m_Player1CountClickAudios.clear();

	int player1clickCount;
	for (auto& clickfolderpath : Player1ClickTypesFolder)
	{
		if (std::filesystem::exists(clickfolderpath.second))
		{
			player1clickCount = 0;
			for (auto& entry : std::filesystem::directory_iterator(clickfolderpath.second))
			{
				if (entry.is_regular_file())
				{
					std::string path = entry.path().string();
					m_Player1ClickAudios[{clickfolderpath.first, player1clickCount}] = { path };

					if (clickfolderpath.first == ClickType::SoftClick || clickfolderpath.first == ClickType::SoftRelease)
					{
						Config.m_player1_softclicks = true;
					}

					SFmod.LoadSound(path);
					player1clickCount++;
				}
			}
			m_Player1CountClickAudios[clickfolderpath.first] = player1clickCount - 1;

		}
	}

}

void clickpackhandler::LoadCurrentPlayer2Clickpack(const std::string& clickpackpath)
{
	menu::config& Config = menu::config::GetConfig();
	Config.m_player2_softclicks = false;

	std::unordered_map<ClickType, std::string> Player2ClickTypesFolder = { { ClickType::NormalClick, clickpackpath + "/clicks/" }, { ClickType::NormalRelease,clickpackpath+ "/releases/" },
{ ClickType::SoftClick, clickpackpath+ "/softclicks/" }, { ClickType::SoftRelease,clickpackpath+ "/softreleases/" } };

	SimpleFMOD& SFmod = SimpleFMOD::GetInstance();
	m_Player2ClickAudios.clear();
	m_Player2CountClickAudios.clear();

	int player2clickCount;
	for (auto& clickfolderpath : Player2ClickTypesFolder)
	{
		if (std::filesystem::exists(clickfolderpath.second))
		{
			player2clickCount = 0;
			for (auto& entry : std::filesystem::directory_iterator(clickfolderpath.second))
			{
				if (entry.is_regular_file())
				{
					std::string path = entry.path().string();
					m_Player2ClickAudios[{clickfolderpath.first, player2clickCount}] = { path };

					if (clickfolderpath.first == ClickType::SoftClick || clickfolderpath.first == ClickType::SoftRelease)
					{
						Config.m_player2_softclicks = true;
					}


					SFmod.LoadSound(path);
					player2clickCount++;
				}
			}
			m_Player2CountClickAudios[clickfolderpath.first] = player2clickCount - 1;
		}
	}
}

void clickpackhandler::LoadClickpacks()
{
	m_clickpacks.clear();

	m_clickpacks.push_back("None");

	for (const auto& entry : std::filesystem::directory_iterator(".cbot/clickpacks")) {
		if (std::filesystem::is_directory(entry.status())) {
			m_clickpacks.push_back(entry.path().generic_string());
		}
	}

	if (m_clickpacks.size() == 1)
	{
		m_clickpacks.clear();
		m_clickpacks.push_back("No clickpacks in .cbot/clickpacks folder");
	}
	m_clickpacks_cstr.clear();

	m_clickpacks_cstr.reserve(m_clickpacks.size());
	for (auto& folder : m_clickpacks)
		m_clickpacks_cstr.push_back(folder.c_str());
}

ClickType clickpackhandler::CheckClickType(bool SoftClick, bool IsHolding)
{
	static float PreviousTime = 0;
	float PlayLayerTime = PlayLayer::get()->m_timePlayed;
	float CurrentTime = (PlayLayerTime - PreviousTime);
	PreviousTime = PlayLayerTime;

	if (CurrentTime < fast_random::randomfloat(0.1f, 0.125f) && SoftClick)
	{
		if (IsHolding)
			return ClickType::SoftClick;
		else
			return ClickType::SoftRelease;
	}

	if (IsHolding)
		return ClickType::NormalClick;
	else
		return ClickType::NormalRelease;
}


