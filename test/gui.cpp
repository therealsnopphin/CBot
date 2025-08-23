#include "pch.h"

namespace CBot
{
	namespace gui
	{
		// This function is called once when the hook is initialized
		// You can use it to set up ImGui styles, fonts, etc.

		void initializeImGui()
		{
			ImVec4* colors = ImGui::GetStyle().Colors;
			colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
			colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
			colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.06f, 0.06f, 0.94f);
			colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
			colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
			colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
			colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
			colors[ImGuiCol_FrameBg] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
			colors[ImGuiCol_FrameBgHovered] = ImVec4(0.60f, 0.26f, 0.98f, 0.40f);
			colors[ImGuiCol_FrameBgActive] = ImVec4(0.60f, 0.26f, 0.98f, 0.67f);
			colors[ImGuiCol_TitleBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
			colors[ImGuiCol_TitleBgActive] = ImVec4(0.31f, 0.16f, 0.48f, 1.00f);
			colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
			colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
			colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
			colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
			colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
			colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
			colors[ImGuiCol_CheckMark] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
			colors[ImGuiCol_SliderGrab] = ImVec4(0.54f, 0.24f, 0.88f, 1.00f);
			colors[ImGuiCol_SliderGrabActive] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
			colors[ImGuiCol_Button] = ImVec4(0.60f, 0.26f, 0.98f, 0.40f);
			colors[ImGuiCol_ButtonHovered] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
			colors[ImGuiCol_ButtonActive] = ImVec4(0.49f, 0.06f, 0.98f, 1.00f);
			colors[ImGuiCol_Header] = ImVec4(0.60f, 0.26f, 0.98f, 0.31f);
			colors[ImGuiCol_HeaderHovered] = ImVec4(0.60f, 0.26f, 0.98f, 0.80f);
			colors[ImGuiCol_HeaderActive] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
			colors[ImGuiCol_Separator] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
			colors[ImGuiCol_SeparatorHovered] = ImVec4(0.41f, 0.10f, 0.75f, 0.78f);
			colors[ImGuiCol_SeparatorActive] = ImVec4(0.41f, 0.10f, 0.75f, 1.00f);
			colors[ImGuiCol_ResizeGrip] = ImVec4(0.60f, 0.26f, 0.98f, 0.20f);
			colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.60f, 0.26f, 0.98f, 0.67f);
			colors[ImGuiCol_ResizeGripActive] = ImVec4(0.60f, 0.26f, 0.98f, 0.95f);
			colors[ImGuiCol_TabHovered] = ImVec4(0.60f, 0.26f, 0.98f, 0.80f);
			colors[ImGuiCol_Tab] = ImVec4(0.37f, 0.18f, 0.58f, 0.86f);
			colors[ImGuiCol_TabSelected] = ImVec4(0.42f, 0.20f, 0.68f, 1.00f);
			colors[ImGuiCol_TabSelectedOverline] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
			colors[ImGuiCol_TabDimmed] = ImVec4(0.11f, 0.07f, 0.15f, 0.97f);
			colors[ImGuiCol_TabDimmedSelected] = ImVec4(0.27f, 0.14f, 0.42f, 1.00f);
			colors[ImGuiCol_TabDimmedSelectedOverline] = ImVec4(0.50f, 0.50f, 0.50f, 0.00f);
			colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
			colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
			colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
			colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
			colors[ImGuiCol_TableHeaderBg] = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
			colors[ImGuiCol_TableBorderStrong] = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
			colors[ImGuiCol_TableBorderLight] = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
			colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
			colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
			colors[ImGuiCol_TextLink] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
			colors[ImGuiCol_TextSelectedBg] = ImVec4(0.53f, 0.53f, 0.53f, 0.45f);
			colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
			colors[ImGuiCol_NavCursor] = ImVec4(0.60f, 0.26f, 0.98f, 1.00f);
			colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
			colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
			colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
		}

		void loadcurrentClickpack()
		{
			m_player1_hardclicksclickpack = true;
			m_player1_softclicksclickpack = true;
			m_player1_whitenoiseclickpack = true;
			m_player2_hardclicksclickpack = true;
			m_player2_softclicksclickpack = true;
			m_player2_whitenoiseclickpack = true;

			std::unordered_map<ClickType, std::string> Player1ClickTypesFolder = { { ClickType::NormalClick, m_player1_clickpack_path + "\\Clicks\\" }, { ClickType::NormalRelease,m_player1_clickpack_path + "\\Releases\\" },
	 { ClickType::SoftClick, m_player1_clickpack_path + "\\softClicks\\" }, { ClickType::SoftRelease, m_player1_clickpack_path + "\\softReleases\\" } ,
	 { ClickType::HardClick, m_player1_clickpack_path + "\\hardClicks\\" }, { ClickType::HardRelease,  m_player1_clickpack_path + "\\hardReleases\\" } };

			std::unordered_map<ClickType, std::string> Player2ClickTypesFolder = { { ClickType::NormalClick, m_player2_clickpack_path + "\\Clicks\\" }, { ClickType::NormalRelease,m_player2_clickpack_path + "\\Releases\\" },
	{ ClickType::SoftClick, m_player2_clickpack_path + "\\softClicks\\" }, { ClickType::SoftRelease, m_player2_clickpack_path + "\\softReleases\\" } ,
	{ ClickType::HardClick, m_player2_clickpack_path + "\\hardClicks\\" }, { ClickType::HardRelease,  m_player2_clickpack_path + "\\hardReleases\\" } };


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
							CBot::fmodengine::createSound(entry.path().string());
							player1clickCount++;
						}
					}
					m_Player1SizeClickAudios[clickfolderpath.first] = player1clickCount - 1;
				}
				else
				{
					if (clickfolderpath.first == ClickType::SoftClick || clickfolderpath.first == ClickType::SoftRelease)
					{
						m_player1_softclicksclickpack = false;
					}


					if (clickfolderpath.first == ClickType::HardClick || clickfolderpath.first == ClickType::HardRelease)
					{
						m_player1_hardclicksclickpack = false;
					}
				}

			}

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
							CBot::fmodengine::createSound(entry.path().string());
							player2clickCount++;
						}
					}
					m_Player2SizeClickAudios[clickfolderpath.first] = player2clickCount - 1;
				}
				else
				{
					if (clickfolderpath.first == ClickType::SoftClick || clickfolderpath.first == ClickType::SoftRelease)
					{
						m_player2_softclicksclickpack = false;
					}


					if (clickfolderpath.first == ClickType::HardClick || clickfolderpath.first == ClickType::HardRelease)
					{
						m_player2_hardclicksclickpack = false;
					}
				}

			}
			if (std::filesystem::exists(m_player1_clickpack_path))
			{
				bool isWhiteNoiseFound = false;
				for (auto& entry : std::filesystem::directory_iterator(m_player1_clickpack_path))
				{
					if (entry.is_regular_file())
					{
						std::string strfile = entry.path().string();


						isWhiteNoiseFound = strfile.contains("whitenoise") || strfile.contains("noise");

						if (isWhiteNoiseFound)
						{
							std::println("Creating sound named {0}, result = {1}", strfile, FMOD_ErrorString(CBot::fmodengine::system->createSound(strfile.c_str(), FMOD_LOOP_NORMAL | FMOD_DEFAULT, nullptr, &m_whiteplayer1noisesound)));
							std::println("Playing sound named {0}, result is = {1}", strfile, FMOD_ErrorString(CBot::fmodengine::system->playSound(m_whiteplayer1noisesound, nullptr, false, &m_whiteplayer1noisechannel)));
							break;
						}
					}
				}
				if (isWhiteNoiseFound == false)
				{
					m_player1_whitenoiseclickpack = false;

					m_whiteplayer1noisechannel->stop();
				}
			}
			else
			{
				m_player1_whitenoiseclickpack = false;

				m_whiteplayer1noisechannel->stop();
			}

			if (std::filesystem::exists(m_player2_clickpack_path))
			{
				bool isWhiteNoiseFound = false;
				for (auto& entry : std::filesystem::directory_iterator(m_player2_clickpack_path))
				{
					if (entry.is_regular_file())
					{
						std::string strfile = entry.path().string();


						isWhiteNoiseFound = strfile.contains("whitenoise") || strfile.contains("noise");

						if (isWhiteNoiseFound)
						{
							std::println("Creating sound named {0}, result = {1}", strfile, FMOD_ErrorString(CBot::fmodengine::system->createSound(strfile.c_str(), FMOD_LOOP_NORMAL | FMOD_DEFAULT, nullptr, &m_whiteplayer1noisesound)));
							std::println("Playing sound named {0}, result is = {1}", strfile, FMOD_ErrorString(CBot::fmodengine::system->playSound(m_whiteplayer1noisesound, nullptr, false, &m_whiteplayer1noisechannel)));
							break;
						}
					}
				}
				if (isWhiteNoiseFound == false)
				{
					m_player2_whitenoiseclickpack = false;

					m_whiteplayer2noisechannel->stop();
				}
			}
			else
			{
				m_player2_whitenoiseclickpack = false;

				m_whiteplayer2noisechannel->stop();
			}

			m_player2_whitenoise = m_player2_whitenoiseclickpack;
			m_player2_hardclicks = m_player2_hardclicksclickpack;
			m_player2_softclicks = m_player2_softclicksclickpack;

			m_player1_whitenoise = m_player1_whitenoiseclickpack;
			m_player1_hardclicks = m_player1_hardclicksclickpack;
			m_player1_softclicks = m_player1_softclicksclickpack;
		}

		void loadClickpacks(std::vector<const char*>& clickpack_cstrs)
		{
			std::vector<std::string> vectorclickpacks;

			vectorclickpacks.push_back("None");

			for (const auto& entry : std::filesystem::directory_iterator(".cbot\\clickpacks")) {
				if (std::filesystem::is_directory(entry.status())) {
					vectorclickpacks.push_back(entry.path().generic_string());
				}
			}

			if (vectorclickpacks.size() == 1)
			{
				vectorclickpacks.clear();
				vectorclickpacks.push_back("No clickpacks in .cbot/clickpacks folder");
			}

			clickpack_cstrs.reserve(vectorclickpacks.size());
			for (auto& folder : vectorclickpacks)
				clickpack_cstrs.push_back(folder.c_str());
		}

		void renderAutoUpdate()
		{
			ImGui::Begin("AutoUpdate");
			//Config button
								//Config button
			if (ImGui::BeginCombo("Keybind", keyEntries[m_selectedKeyIndex].name))
			{
				for (int i = 0; i < IM_ARRAYSIZE(keyEntries); i++)
				{
					bool isSelected = (m_selectedKeyIndex == i);
					if (ImGui::Selectable(keyEntries[i].name, isSelected))
					{
						m_selectedKeyIndex = i;
						m_selectedKey = keyEntries[m_selectedKeyIndex].value;
						saveMenukeyConfig();
					}

					if (isSelected)
						ImGui::SetItemDefaultFocus();
				}
				ImGui::EndCombo();
			}

			ImGui::Text("We currently deceted\nthat new version of CBot has been found\ngo to https://github.com/therealsnopphin/CBot/releases\nto update CBot");

			if (ImGui::Button("Go to url") == true)
			{
				system("start https://github.com/therealsnopphin/CBot/releases");
			}

			if (ImGui::Button("Skip it") == true)
			{
				m_updatefound = false;
			}

			ImGui::End();
		}

		// This function is called every frame to render the ImGui interface
		// You can use it to create windows, buttons, sliders, etc.
		void renderImGui()
		{
			if (m_show)
			{
				if (m_updatefound == false)
				{
					ImGui::Begin(m_Title.c_str());

					//Config button
					if (ImGui::BeginCombo("Keybind", keyEntries[m_selectedKeyIndex].name))
					{
						for (int i = 0; i < IM_ARRAYSIZE(keyEntries); i++)
						{
							bool isSelected = (m_selectedKeyIndex == i);
							if (ImGui::Selectable(keyEntries[i].name, isSelected))
							{
								m_selectedKeyIndex = i;
								m_selectedKey = keyEntries[m_selectedKeyIndex].value;
								saveMenukeyConfig();
							}

							if (isSelected)
								ImGui::SetItemDefaultFocus();
						}
						ImGui::EndCombo();
					}

					if (ImGui::IsItemHovered())
					{
						ImGui::SetTooltip("See keyconfig.txt in Geometry Dash folder for key values.");
					}

					//Clickpack
					{
						static int s_selected_player1_clickpack_index = 0;
						static int s_selected_player2_clickpack_index = 0;
						// Convert to const char* array
						std::vector<const char*> clickpack_cstrs;
						loadClickpacks(clickpack_cstrs);

						if (ImGui::Combo("Select player1 clickpack", &s_selected_player1_clickpack_index, clickpack_cstrs.data(), clickpack_cstrs.size()))
						{
							m_player1_clickpack_path = clickpack_cstrs[s_selected_player1_clickpack_index];

							loadcurrentClickpack();
						}
						if (ImGui::Combo("Select player2 clickpack", &s_selected_player2_clickpack_index, clickpack_cstrs.data(), clickpack_cstrs.size()))
						{
							m_player2_clickpack_path = clickpack_cstrs[s_selected_player2_clickpack_index];

							loadcurrentClickpack();
						}
					}

					if (m_player1_softclicksclickpack == false)
						m_player1_softclicks = false;

					if (m_player1_hardclicksclickpack == false)
						m_player1_hardclicks = false;
					if (m_player1_whitenoiseclickpack == false)
						m_player1_whitenoise = false;

					if (m_player1_whitenoise == true)
					{
						m_whiteplayer1noisechannel->setVolume(m_whitenoisevolume);
						m_whiteplayer1noisechannel->setPaused(false);
					}
					else
					{
						m_whiteplayer1noisechannel->setPaused(true);
					}

					if (m_player2_softclicksclickpack == false)
						m_player2_softclicks = false;

					if (m_player2_hardclicksclickpack == false)
						m_player2_hardclicks = false;
					if (m_player2_whitenoiseclickpack == false)
						m_player2_whitenoise = false;

					if (m_player2_whitenoise == true)
					{
						m_whiteplayer2noisechannel->setVolume(m_whitenoisevolume);
						m_whiteplayer2noisechannel->setPaused(false);
					}
					else
					{
						m_whiteplayer2noisechannel->setPaused(true);
					}

					if (ImGui::Button("Open Audio Config")) {
						ImGui::OpenPopup("Audio Config Settings");
					}
					if (ImGui::BeginPopupModal("Audio Config Settings", nullptr, ImGuiWindowFlags_AlwaysAutoResize))
					{
						//Settings
						ImGui::Checkbox("Enable Player1 Softclicks", &m_player1_softclicks);
						ImGui::Checkbox("Enable Player1 Hardclicks", &m_player1_hardclicks);
						ImGui::Checkbox("Enable Player1 WhiteNoise", &m_player1_whitenoise);
						ImGui::Checkbox("Enable Player2 Softclicks", &m_player2_softclicks);
						ImGui::Checkbox("Enable Player2 Hardclicks", &m_player2_hardclicks);
						ImGui::Checkbox("Enable Player2 WhiteNoise", &m_player2_whitenoise);
						ImGui::InputFloat("PC Noise volume", &m_whitenoisevolume);
						ImGui::InputFloat("Min Click Pitch", &m_minPitch);
						ImGui::InputFloat("Max Click Pitch", &m_maxPitch);
						ImGui::InputFloat("Min Click Volume", &m_minVolume);
						ImGui::InputFloat("Max Click Volume", &m_maxVolume);
						ImGui::InputFloat("Min softclicks_time", &m_minsoftClickstime);
						ImGui::InputFloat("Max softclicks_time", &m_maxsoftClickstime);
						ImGui::InputFloat("Min hardclicks_time", &m_minhardClickstime);
						ImGui::InputFloat("Max hardclicks_time", &m_maxhardClickstime);
						ImGui::Checkbox("Random Panning", &m_randomPanning);


						if (ImGui::Button("Close"))
							ImGui::CloseCurrentPopup();

						ImGui::EndPopup();
					}

					ImGui::End();

					ImGui::Begin("ReplayBot");
					ImGui::Combo("State:", (int*)&m_currentstate, m_strstates.data(), m_strstates.size());
					ImGui::Text("Replay Name:");
					ImGui::InputText("##macro_name", &m_currentMacroname);

					if (ImGui::Button("Save"))
					{
						m_macro.save(m_currentMacroname);
					}

					ImGui::SameLine();
					if (ImGui::Button("Load"))
					{
						m_macro.load(m_currentMacroname);
						m_currentstate = state::PlayBack;
					}
					ImGui::InputInt("Seed", (int*)&m_seed);
					if (ImGui::Button("Open ReplayBot config")) {
						ImGui::OpenPopup("Replay Bot Settings");
					}
					if (ImGui::BeginPopupModal("Replay Bot Settings", nullptr, ImGuiWindowFlags_AlwaysAutoResize))
					{
						ImGui::Checkbox("Physics accuarcy", &m_physicsaccuracy);
						ImGui::Checkbox("Ignore input", &m_ignoreinput);
						if (ImGui::IsItemHovered())
						{
							ImGui::SetTooltip("Ignores player Input When playbacking.");
						}

						if (ImGui::Checkbox("Enable speedhack", &m_enablespeedhack))
						{
							if (m_enablespeedhack == false)
							{
								for (auto& sound : FMODAudioEngine::get()->m_channelIDToChannel)
								{
									sound.second->setPitch(1);
								}
							}
						}
						ImGui::InputFloat("Speed", &m_speed);

						if (m_speed == 0.0f)
						{
							m_speed = 1.0f;
						}

						ImGui::Checkbox("Enable tps bypass", &m_enabletpsbypass);
						if (ImGui::IsItemHovered())
						{
							ImGui::SetTooltip("Physics simulation.");
						}
						if (ImGui::InputFloat("Tps", &m_tps))
						{
							m_tps = roundf(m_tps / 60.0f) * 60.0f;
						}
						ImGui::EndPopup();
					}

					ImGui::End();
				}
				else
				{
					renderAutoUpdate();
				}
			}
		}

		$on_mod(Loaded) {
			ImGuiCocos::get().setup([] {
				writeTutorialKeys();

				m_updatefound = CBot::autoupdate::CheckForNewUpdate();

				std::filesystem::create_directories(".cbot\\clickpacks");
				std::filesystem::create_directories(".cbot\\macros");

				if (std::filesystem::exists(savefilepath))
				{
					loadMenukeyConfig();
				}
				initializeImGui();
				// this runs after imgui has been setup,
				// its a callback as imgui will be re initialized when toggling fullscreen,
				// so use this to setup any themes and or fonts!
				}).draw([] {
					renderImGui();
					});
		}

		class $modify(FMODAudioEngine)
		{
			void update(float p0)
			{
				if (m_enablespeedhack == true)
				{
					for (auto& sound : m_channelIDToChannel)
					{
						sound.second->setPitch(m_speed);
					}
				}
			}
		};

		class $modify(ImGuiKeybindHook, cocos2d::CCKeyboardDispatcher) {
			bool dispatchKeyboardMSG(cocos2d::enumKeyCodes key, bool isKeyDown, bool isKeyRepeat) {
				if (key == m_selectedKey && isKeyDown) {
					m_show = !m_show;
				}
				return CCKeyboardDispatcher::dispatchKeyboardMSG(key, isKeyDown, isKeyRepeat);
			}
		};
	}
}