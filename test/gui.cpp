#include "pch.h"


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

		std::unordered_map<ClickType, std::string> Player1ClickTypesFolder = { { ClickType::NormalClick, gui::m_player1_clickpack_path + "\\Clicks\\" }, { ClickType::NormalRelease,gui::m_player1_clickpack_path + "\\Releases\\" },
 { ClickType::SoftClick, gui::m_player1_clickpack_path + "\\softClicks\\" }, { ClickType::SoftRelease, gui::m_player1_clickpack_path + "\\softReleases\\" } ,
 { ClickType::HardClick, gui::m_player1_clickpack_path + "\\hardClicks\\" }, { ClickType::HardRelease,  gui::m_player1_clickpack_path + "\\hardReleases\\" } };

		std::unordered_map<ClickType, std::string> Player2ClickTypesFolder = { { ClickType::NormalClick, gui::m_player2_clickpack_path + "\\Clicks\\" }, { ClickType::NormalRelease,gui::m_player2_clickpack_path + "\\Releases\\" },
{ ClickType::SoftClick, gui::m_player2_clickpack_path + "\\softClicks\\" }, { ClickType::SoftRelease, gui::m_player2_clickpack_path + "\\softReleases\\" } ,
{ ClickType::HardClick, gui::m_player2_clickpack_path + "\\hardClicks\\" }, { ClickType::HardRelease,  gui::m_player2_clickpack_path + "\\hardReleases\\" } };


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

		std::string whiteplayer1noiseaudiopath = gui::m_player1_clickpack_path + "\\whitenoise.wav";
		if (std::filesystem::exists(whiteplayer1noiseaudiopath))
		{
			std::cout << FMOD_ErrorString(CBot::fmodengine::system->createSound(whiteplayer1noiseaudiopath.c_str(), FMOD_LOOP_NORMAL | FMOD_DEFAULT, nullptr, &m_whiteplayer1noisesound)) << std::endl;
			std::cout << FMOD_ErrorString(CBot::fmodengine::system->playSound(m_whiteplayer1noisesound, nullptr, false, &m_whiteplayer1noisechannel)) << std::endl;
		}
		else
		{
			m_player1_whitenoiseclickpack = false;

			m_whiteplayer1noisechannel->stop();
		}

		std::string whiteplayer2noiseaudiopath = gui::m_player2_clickpack_path + "\\whitenoise.wav";
		if (std::filesystem::exists(whiteplayer2noiseaudiopath))
		{
			std::cout << FMOD_ErrorString(CBot::fmodengine::system->createSound(whiteplayer2noiseaudiopath.c_str(), FMOD_LOOP_NORMAL | FMOD_DEFAULT, nullptr, &m_whiteplayer2noisesound)) << std::endl;
			std::cout << FMOD_ErrorString(CBot::fmodengine::system->playSound(m_whiteplayer2noisesound, nullptr, false, &m_whiteplayer2noisechannel)) << std::endl;
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
	void loadClickpacks(std::vector<std::string>& vectorclickpacks)
	{
		for (const auto& entry : std::filesystem::directory_iterator(".cbot")) {
			if (std::filesystem::is_directory(entry.status())) {
				vectorclickpacks.push_back(entry.path().generic_string());
			}
		}
	}

	void renderAutoUpdate()
	{
		ImGui::Begin("AutoUpdate");
		//Config button
		ImGui::InputInt("Menu Key", &m_selectedKey);
		saveMenukeyConfig("save.json");

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
				ImGui::InputInt("Menu Key", &m_selectedKey);

				//Clickpack
				{
					std::vector<std::string> clickpackfolders;
					clickpackfolders.push_back("None");
					loadClickpacks(clickpackfolders);

					static std::string oldplayer1clickpack = m_player1_clickpack_path;
					static std::string oldplayer2clickpack = m_player2_clickpack_path;

					static int s_selected_player1_clickpack_index = 0;
					static int s_selected_player2_clickpack_index = 0;
					// Convert to const char* array
					std::vector<const char*> clickpack_cstrs;
					clickpack_cstrs.reserve(clickpackfolders.size());
					for (const auto& folder : clickpackfolders)
						clickpack_cstrs.push_back(folder.c_str());

					ImGui::Combo("Select player1 clickpack", &s_selected_player1_clickpack_index, clickpack_cstrs.data(), clickpack_cstrs.size());
					ImGui::Combo("Select player2 clickpack", &s_selected_player2_clickpack_index, clickpack_cstrs.data(), clickpack_cstrs.size());
					m_player1_clickpack_path = clickpackfolders[s_selected_player1_clickpack_index];
					m_player2_clickpack_path = clickpackfolders[s_selected_player2_clickpack_index];

					if (oldplayer1clickpack != m_player1_clickpack_path || oldplayer2clickpack != m_player2_clickpack_path)
					{
						loadcurrentClickpack();
					}
					oldplayer1clickpack = m_player1_clickpack_path;
					oldplayer2clickpack = m_player2_clickpack_path;
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

				//Settings
				ImGui::Checkbox("Enable Player1 Softclicks", &m_player1_softclicks);
				ImGui::Checkbox("Enable Player1 Hardclicks", &m_player1_hardclicks);
				ImGui::Checkbox("Enable Player1 WhiteNoise", &m_player1_whitenoise);

				//Settings
				ImGui::Checkbox("Enable Player2 Softclicks", &m_player2_softclicks);
				ImGui::Checkbox("Enable Player2 Hardclicks", &m_player2_hardclicks);
				ImGui::Checkbox("Enable Player2 WhiteNoise", &m_player2_whitenoise);

				ImGui::InputFloat("PC Noise volume", &m_whitenoisevolume);
				ImGui::InputFloat("Min Pitch", &m_minPitch);
				ImGui::InputFloat("Max Pitch", &m_maxPitch);
				ImGui::InputFloat("Max Volume", &m_maxVolume);
				ImGui::InputFloat("Min Volume", &m_minVolume);
				ImGui::InputFloat("Min softclicks_time", &m_minsoftClickstime);
				ImGui::InputFloat("Max softclicks_time", &m_maxsoftClickstime);
				ImGui::InputFloat("Min hardclicks_time", &m_minhardClickstime);
				ImGui::InputFloat("Max hardclicks_time", &m_maxhardClickstime);
				ImGui::Checkbox("Random Panning", &m_randomPanning);

				ImGui::End();

				ImGui::Begin("Reverb");
				ImGui::Text("Select Reverb Type");
				ImGui::Combo("Reverb type: ", &m_currentreverbtype, m_dsps.data(), m_dsps.size());

				switch (m_currentreverbtype)
				{
				case (int)FMOD_DSP_TYPE_OSCILLATOR:
					ImGui::InputInt("FMOD_DSP_OSCILLATOR_TYPE", (int*)&m_reverb::FMOD_DSP_OSCILLATOR_TYPE);
					ImGui::InputFloat("FMOD_DSP_OSCILLATOR_RATE", &m_reverb::FMOD_DSP_OSCILLATOR_RATE);
					break;

				case (int)FMOD_DSP_TYPE_LOWPASS:
					ImGui::InputFloat("FMOD_DSP_LOWPASS_CUTOFF", &m_reverb::FMOD_DSP_LOWPASS_CUTOFF);
					ImGui::InputFloat("FMOD_DSP_LOWPASS_RESONANCE", &m_reverb::FMOD_DSP_LOWPASS_RESONANCE);
					break;

				case (int)FMOD_DSP_TYPE_ITLOWPASS:
					ImGui::InputFloat("FMOD_DSP_ITLOWPASS_CUTOFF", &m_reverb::FMOD_DSP_ITLOWPASS_CUTOFF);
					break;

				case (int)FMOD_DSP_TYPE_HIGHPASS:
					ImGui::InputFloat("FMOD_DSP_HIGHPASS_CUTOFF", &m_reverb::FMOD_DSP_HIGHPASS_CUTOFF);
					ImGui::InputFloat("FMOD_DSP_HIGHPASS_RESONANCE", &m_reverb::FMOD_DSP_HIGHPASS_RESONANCE);
					break;

				case (int)FMOD_DSP_TYPE_ECHO:
					ImGui::InputFloat("FMOD_DSP_ECHO_DELAY", &m_reverb::FMOD_DSP_ECHO_DELAY);
					ImGui::InputFloat("FMOD_DSP_ECHO_FEEDBACK", &m_reverb::FMOD_DSP_ECHO_FEEDBACK);
					ImGui::InputFloat("FMOD_DSP_ECHO_DRYLEVEL", &m_reverb::FMOD_DSP_ECHO_DRYLEVEL);
					ImGui::InputFloat("FMOD_DSP_ECHO_WETLEVEL", &m_reverb::FMOD_DSP_ECHO_WETLEVEL);
					break;

				case (int)FMOD_DSP_TYPE_FADER:
					ImGui::InputFloat("FMOD_DSP_FADER_GAIN", &m_reverb::FMOD_DSP_FADER_GAIN);
					break;

				case (int)FMOD_DSP_TYPE_FLANGE:
					ImGui::InputFloat("FMOD_DSP_FLANGE_MIX", &m_reverb::FMOD_DSP_FLANGE_MIX);
					ImGui::InputFloat("FMOD_DSP_FLANGE_DEPTH", &m_reverb::FMOD_DSP_FLANGE_DEPTH);
					ImGui::InputFloat("FMOD_DSP_FLANGE_RATE", &m_reverb::FMOD_DSP_FLANGE_RATE);
					break;

				case (int)FMOD_DSP_TYPE_DISTORTION:
					ImGui::InputFloat("FMOD_DSP_DISTORTION_LEVEL", &m_reverb::FMOD_DSP_DISTORTION_LEVEL);
					break;

				case (int)FMOD_DSP_TYPE_NORMALIZE:
					ImGui::InputFloat("FMOD_DSP_NORMALIZE_FADETIME", &m_reverb::FMOD_DSP_NORMALIZE_FADETIME);
					ImGui::InputFloat("FMOD_DSP_NORMALIZE_MAXAMP", &m_reverb::FMOD_DSP_NORMALIZE_MAXAMP);
					break;

				case (int)FMOD_DSP_TYPE_LIMITER:
					ImGui::InputFloat("FMOD_DSP_LIMITER_CEILING", &m_reverb::FMOD_DSP_LIMITER_CEILING);
					break;

				case (int)FMOD_DSP_TYPE_PARAMEQ:
					ImGui::InputFloat("FMOD_DSP_PARAMEQ_CENTER", &m_reverb::FMOD_DSP_PARAMEQ_CENTER);
					ImGui::InputFloat("FMOD_DSP_PARAMEQ_BANDWIDTH", &m_reverb::FMOD_DSP_PARAMEQ_BANDWIDTH);
					ImGui::InputFloat("FMOD_DSP_PARAMEQ_GAIN", &m_reverb::FMOD_DSP_PARAMEQ_GAIN);
					break;

				case (int)FMOD_DSP_TYPE_PITCHSHIFT:
					ImGui::InputFloat("FMOD_DSP_PITCHSHIFT_PITCH", &m_reverb::FMOD_DSP_PITCHSHIFT_PITCH);
					break;

				case (int)FMOD_DSP_TYPE_CHORUS:
					ImGui::InputFloat("FMOD_DSP_CHORUS_MIX", &m_reverb::FMOD_DSP_CHORUS_MIX);
					ImGui::InputFloat("FMOD_DSP_CHORUS_RATE", &m_reverb::FMOD_DSP_CHORUS_RATE);
					ImGui::InputFloat("FMOD_DSP_CHORUS_DEPTH", &m_reverb::FMOD_DSP_CHORUS_DEPTH);
					break;

				case (int)FMOD_DSP_TYPE_ITECHO:
					ImGui::InputFloat("FMOD_DSP_ITECHO_FEEDBACK", &m_reverb::FMOD_DSP_ITECHO_FEEDBACK);
					break;

				case (int)FMOD_DSP_TYPE_COMPRESSOR:
					ImGui::InputFloat("FMOD_DSP_COMPRESSOR_THRESHOLD", &m_reverb::FMOD_DSP_COMPRESSOR_THRESHOLD);
					ImGui::InputFloat("FMOD_DSP_COMPRESSOR_RATIO", &m_reverb::FMOD_DSP_COMPRESSOR_RATIO);
					ImGui::InputFloat("FMOD_DSP_COMPRESSOR_ATTACK", &m_reverb::FMOD_DSP_COMPRESSOR_ATTACK);
					ImGui::InputFloat("FMOD_DSP_COMPRESSOR_RELEASE", &m_reverb::FMOD_DSP_COMPRESSOR_RELEASE);
					break;

				case (int)FMOD_DSP_TYPE_SFXREVERB:
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_DECAYTIME", &m_reverb::FMOD_DSP_SFXREVERB_DECAYTIME);
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_DENSITY", &m_reverb::FMOD_DSP_SFXREVERB_DENSITY);
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_DIFFUSION", &m_reverb::FMOD_DSP_SFXREVERB_DIFFUSION);
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_WETLEVEL", &m_reverb::FMOD_DSP_SFXREVERB_WETLEVEL);
					ImGui::InputFloat("FMOD_DSP_SFXREVERB_DRYLEVEL", &m_reverb::FMOD_DSP_SFXREVERB_DRYLEVEL);
					break;

				case (int)FMOD_DSP_TYPE_LOWPASS_SIMPLE:
					ImGui::InputFloat("FMOD_DSP_LOWPASS_SIMPLE_CUTOFF", &m_reverb::FMOD_DSP_LOWPASS_SIMPLE_CUTOFF);
					break;

				case (int)FMOD_DSP_TYPE_DELAY:
					ImGui::InputFloat("FMOD_DSP_DELAY_DELAY", &m_reverb::FMOD_DSP_DELAY_DELAY);
					break;

				case (int)FMOD_DSP_TYPE_TREMOLO:
					ImGui::InputFloat("FMOD_DSP_TREMOLO_FREQUENCY", &m_reverb::FMOD_DSP_TREMOLO_FREQUENCY);
					ImGui::InputFloat("FMOD_DSP_TREMOLO_DEPTH", &m_reverb::FMOD_DSP_TREMOLO_DEPTH);
					ImGui::InputFloat("FMOD_DSP_TREMOLO_SKEW", &m_reverb::FMOD_DSP_TREMOLO_SKEW);
					break;

				case (int)FMOD_DSP_TYPE_HIGHPASS_SIMPLE:
					ImGui::InputFloat("FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF", &m_reverb::FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF);
					break;
				}
				saveMenukeyConfig("save.json");
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

			std::filesystem::create_directory(".cbot");
			if (std::filesystem::exists("save.json"))
			{
				loadMenukeyConfig("save.json");
			}

			initializeImGui();
			// this runs after imgui has been setup,
			// its a callback as imgui will be re initialized when toggling fullscreen,
			// so use this to setup any themes and or fonts!
			}).draw([] {
				renderImGui();
				});
	}

	
	class $modify(ImGuiKeybindHook, cocos2d::CCKeyboardDispatcher) {
		bool dispatchKeyboardMSG(cocos2d::enumKeyCodes key, bool isKeyDown, bool isKeyRepeat) {
			if (key == m_selectedKey && isKeyDown) {
				gui::m_show = !gui::m_show;
			}
			return CCKeyboardDispatcher::dispatchKeyboardMSG(key, isKeyDown, isKeyRepeat);
		}
	};
	
}