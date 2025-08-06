#include "pch.h"
#include "fmodengine.h"
#include "gui.h"
#include <algorithm>

namespace CBot::fmodengine
{

	void init()
	{
		std::println("Wait");
		CBot::fmodengine::system = FMODAudioEngine::get()->m_system;
	}

	void createSound(const std::string& file, FMOD_MODE flags)
	{
		if (sounds.find(file) == sounds.end())
		{
			FMOD::Sound* sound = nullptr;
			FMOD_MODE defaultFlags = FMOD_DEFAULT | FMOD_CREATECOMPRESSEDSAMPLE | FMOD_2D;
			if (flags != FMOD_DEFAULT) defaultFlags = flags;

			FMOD_RESULT result = system->createSound(file.c_str(), defaultFlags, nullptr, &sound);
			if (result == FMOD_OK)
			{
				sounds[file] = sound;
			}
			else
			{
				system->createSound(file.c_str(), FMOD_DEFAULT, nullptr, &sound);
				sounds[file] = sound;
			}
		}
	}

	void createSound(const std::string& file)
	{
		createSound(file, FMOD_DEFAULT);
	}

	void playSound(const std::string& file, float Pitch, float Volume)
	{
		if (sounds.find(file) == sounds.end()) return;

		FMOD::Channel* currentchannel = nullptr;
		FMOD_RESULT result_sound = system->playSound(sounds[file], nullptr, true, &currentchannel);
		if (result_sound != FMOD_OK)
		{
			std::println("Error", file, FMOD_ErrorString(result_sound));
			return;
		}

		Volume = std::clamp(Volume, 0.0f, 1.0f);
		currentchannel->setVolume(Volume);
		currentchannel->setPitch(Pitch);
		currentchannel->setPriority(0);

		bool hasLoadedClickpacks = !gui::m_Player1ClickAudios.empty() || !gui::m_Player2ClickAudios.empty();
		if (gui::m_randomPanning && hasLoadedClickpacks)
		{
			float panValue = random::floatRandom(-1.0f, 1.0f) * gui::m_panningIntensity;
			panValue = std::clamp(panValue, -1.0f, 1.0f);
			currentchannel->setPan(panValue);
		}

		if (gui::m_currentreverbtype != (int)FMOD_DSP_TYPE_UNKNOWN && hasLoadedClickpacks)
		{
			FMOD::DSP* reverbdsp = nullptr;
			FMOD_RESULT dspResult = system->createDSPByType((FMOD_DSP_TYPE)gui::m_currentreverbtype, &reverbdsp);
			if (dspResult != FMOD_OK) return;

			switch (gui::m_currentreverbtype)
			{
			case (int)FMOD_DSP_TYPE_OSCILLATOR:
				reverbdsp->setParameterInt(FMOD_DSP_OSCILLATOR_TYPE, gui::m_reverb::FMOD_DSP_OSCILLATOR_TYPE);
				reverbdsp->setParameterFloat(FMOD_DSP_OSCILLATOR_RATE, gui::m_reverb::FMOD_DSP_OSCILLATOR_RATE);
				break;
			case (int)FMOD_DSP_TYPE_LOWPASS:
				reverbdsp->setParameterFloat(FMOD_DSP_LOWPASS_CUTOFF, std::clamp(gui::m_reverb::FMOD_DSP_LOWPASS_CUTOFF, 10.0f, 22000.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_LOWPASS_RESONANCE, std::clamp(gui::m_reverb::FMOD_DSP_LOWPASS_RESONANCE, 0.1f, 10.0f));
				break;
			case (int)FMOD_DSP_TYPE_ITLOWPASS:
				reverbdsp->setParameterFloat(FMOD_DSP_ITLOWPASS_CUTOFF, std::clamp(gui::m_reverb::FMOD_DSP_ITLOWPASS_CUTOFF, 10.0f, 22000.0f));
				break;
			case (int)FMOD_DSP_TYPE_HIGHPASS:
				reverbdsp->setParameterFloat(FMOD_DSP_HIGHPASS_CUTOFF, std::clamp(gui::m_reverb::FMOD_DSP_HIGHPASS_CUTOFF, 10.0f, 22000.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_HIGHPASS_RESONANCE, std::clamp(gui::m_reverb::FMOD_DSP_HIGHPASS_RESONANCE, 0.1f, 10.0f));
				break;
			case (int)FMOD_DSP_TYPE_ECHO:
				reverbdsp->setParameterFloat(FMOD_DSP_ECHO_DELAY, std::clamp(gui::m_reverb::FMOD_DSP_ECHO_DELAY, 0.0f, 5000.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_ECHO_FEEDBACK, std::clamp(gui::m_reverb::FMOD_DSP_ECHO_FEEDBACK, 0.0f, 100.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_ECHO_DRYLEVEL, std::clamp(gui::m_reverb::FMOD_DSP_ECHO_DRYLEVEL, -80.0f, 10.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_ECHO_WETLEVEL, std::clamp(gui::m_reverb::FMOD_DSP_ECHO_WETLEVEL, -80.0f, 10.0f));
				break;
			case (int)FMOD_DSP_TYPE_FADER:
				reverbdsp->setParameterFloat(FMOD_DSP_FADER_GAIN, std::clamp(gui::m_reverb::FMOD_DSP_FADER_GAIN, -80.0f, 10.0f));
				break;
			case (int)FMOD_DSP_TYPE_FLANGE:
				reverbdsp->setParameterFloat(FMOD_DSP_FLANGE_MIX, std::clamp(gui::m_reverb::FMOD_DSP_FLANGE_MIX, 0.0f, 100.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_FLANGE_DEPTH, std::clamp(gui::m_reverb::FMOD_DSP_FLANGE_DEPTH, 0.0f, 100.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_FLANGE_RATE, std::clamp(gui::m_reverb::FMOD_DSP_FLANGE_RATE, 0.0f, 20.0f));
				break;
			case (int)FMOD_DSP_TYPE_DISTORTION:
				reverbdsp->setParameterFloat(FMOD_DSP_DISTORTION_LEVEL, std::clamp(gui::m_reverb::FMOD_DSP_DISTORTION_LEVEL, 0.0f, 1.0f));
				break;
			case (int)FMOD_DSP_TYPE_NORMALIZE:
				reverbdsp->setParameterFloat(FMOD_DSP_NORMALIZE_FADETIME, std::clamp(gui::m_reverb::FMOD_DSP_NORMALIZE_FADETIME, 0.0f, 10000.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_NORMALIZE_MAXAMP, std::clamp(gui::m_reverb::FMOD_DSP_NORMALIZE_MAXAMP, 0.0f, 10.0f));
				break;
			case (int)FMOD_DSP_TYPE_LIMITER:
				reverbdsp->setParameterFloat(FMOD_DSP_LIMITER_CEILING, std::clamp(gui::m_reverb::FMOD_DSP_LIMITER_CEILING, -80.0f, 0.0f));
				break;
			case (int)FMOD_DSP_TYPE_PARAMEQ:
				reverbdsp->setParameterFloat(FMOD_DSP_PARAMEQ_CENTER, std::clamp(gui::m_reverb::FMOD_DSP_PARAMEQ_CENTER, 10.0f, 22000.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_PARAMEQ_BANDWIDTH, std::clamp(gui::m_reverb::FMOD_DSP_PARAMEQ_BANDWIDTH, 0.1f, 5.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_PARAMEQ_GAIN, std::clamp(gui::m_reverb::FMOD_DSP_PARAMEQ_GAIN, -30.0f, 30.0f));
				break;
			case (int)FMOD_DSP_TYPE_PITCHSHIFT:
				reverbdsp->setParameterFloat(FMOD_DSP_PITCHSHIFT_PITCH, std::clamp(gui::m_reverb::FMOD_DSP_PITCHSHIFT_PITCH, 0.5f, 2.0f));
				break;
			case (int)FMOD_DSP_TYPE_CHORUS:
				reverbdsp->setParameterFloat(FMOD_DSP_CHORUS_MIX, std::clamp(gui::m_reverb::FMOD_DSP_CHORUS_MIX, 0.0f, 100.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_CHORUS_RATE, std::clamp(gui::m_reverb::FMOD_DSP_CHORUS_RATE, 0.0f, 20.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_CHORUS_DEPTH, std::clamp(gui::m_reverb::FMOD_DSP_CHORUS_DEPTH, 0.0f, 100.0f));
				break;
			case (int)FMOD_DSP_TYPE_ITECHO:
				reverbdsp->setParameterFloat(FMOD_DSP_ITECHO_FEEDBACK, std::clamp(gui::m_reverb::FMOD_DSP_ITECHO_FEEDBACK, 0.0f, 100.0f));
				break;
			case (int)FMOD_DSP_TYPE_COMPRESSOR:
				reverbdsp->setParameterFloat(FMOD_DSP_COMPRESSOR_THRESHOLD, std::clamp(gui::m_reverb::FMOD_DSP_COMPRESSOR_THRESHOLD, -60.0f, 0.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_COMPRESSOR_RATIO, std::clamp(gui::m_reverb::FMOD_DSP_COMPRESSOR_RATIO, 1.0f, 50.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_COMPRESSOR_ATTACK, std::clamp(gui::m_reverb::FMOD_DSP_COMPRESSOR_ATTACK, 0.1f, 500.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_COMPRESSOR_RELEASE, std::clamp(gui::m_reverb::FMOD_DSP_COMPRESSOR_RELEASE, 1.0f, 1000.0f));
				break;
			case (int)FMOD_DSP_TYPE_SFXREVERB:
				reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DECAYTIME, std::clamp(gui::m_reverb::FMOD_DSP_SFXREVERB_DECAYTIME, 0.1f, 20.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DENSITY, std::clamp(gui::m_reverb::FMOD_DSP_SFXREVERB_DENSITY, 0.0f, 100.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DIFFUSION, std::clamp(gui::m_reverb::FMOD_DSP_SFXREVERB_DIFFUSION, 0.0f, 100.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_WETLEVEL, std::clamp(gui::m_reverb::FMOD_DSP_SFXREVERB_WETLEVEL, -80.0f, 10.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DRYLEVEL, std::clamp(gui::m_reverb::FMOD_DSP_SFXREVERB_DRYLEVEL, -80.0f, 10.0f));
				break;
			case (int)FMOD_DSP_TYPE_LOWPASS_SIMPLE:
				reverbdsp->setParameterFloat(FMOD_DSP_LOWPASS_SIMPLE_CUTOFF, std::clamp(gui::m_reverb::FMOD_DSP_LOWPASS_SIMPLE_CUTOFF, 10.0f, 22000.0f));
				break;
			case (int)FMOD_DSP_TYPE_TREMOLO:
				reverbdsp->setParameterFloat(FMOD_DSP_TREMOLO_FREQUENCY, std::clamp(gui::m_reverb::FMOD_DSP_TREMOLO_FREQUENCY, 0.1f, 20.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_TREMOLO_DEPTH, std::clamp(gui::m_reverb::FMOD_DSP_TREMOLO_DEPTH, 0.0f, 100.0f));
				reverbdsp->setParameterFloat(FMOD_DSP_TREMOLO_SKEW, std::clamp(gui::m_reverb::FMOD_DSP_TREMOLO_SKEW, -1.0f, 1.0f));
				break;
			case (int)FMOD_DSP_TYPE_HIGHPASS_SIMPLE:
				reverbdsp->setParameterFloat(FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF, std::clamp(gui::m_reverb::FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF, 10.0f, 22000.0f));
				break;
			}
			currentchannel->addDSP(0, reverbdsp);
		}

		currentchannel->setPaused(false);
		system->update();
	} 
}
// bro what