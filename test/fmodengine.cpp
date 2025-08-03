#include "pch.h"

void CBot::fmodengine::init()
{   
	std::println("Copying gd's audio fmod system to CBot system");
	CBot::fmodengine::system = FMODAudioEngine::get()->m_system;
}

void CBot::fmodengine::createSound(std::string file)
{
	std::println("Creating sound named {0}, result = {1}", file, FMOD_ErrorString(fmodengine::system->createSound(file.c_str(), FMOD_DEFAULT, nullptr, &fmodengine::sound)));

	sounds[file] = sound;
}

void CBot::fmodengine::playSound(std::string file, float Pitch, float Volume)
{
	FMOD::Channel* currentchannel = nullptr;
	FMOD_RESULT result_sound = fmodengine::system->playSound(sounds[file], nullptr, false, &currentchannel);

	if (result_sound != FMOD_RESULT::FMOD_OK)
	{
		std::println("Error while playing sound named {0}, result = {1}", file, FMOD_ErrorString(result_sound));
		return;
	}

	currentchannel->setVolume(Volume);
	currentchannel->setPitch(Pitch);
	if (gui::m_randomPanning)
	{
		currentchannel->setPan(random::floatRandom(-0.35f, 0.75f));
	}

	if (gui::m_currentreverbtype != (int)FMOD_DSP_TYPE_UNKNOWN)
	{
		FMOD::DSP* reverbdsp = nullptr;
		CBot::fmodengine::system->createDSPByType((FMOD_DSP_TYPE)gui::m_currentreverbtype, &reverbdsp);

		switch (gui::m_currentreverbtype)
		{
		case (int)FMOD_DSP_TYPE_OSCILLATOR:
			reverbdsp->setParameterInt(FMOD_DSP_OSCILLATOR_TYPE, gui::m_reverb::FMOD_DSP_OSCILLATOR_TYPE);
			reverbdsp->setParameterFloat(FMOD_DSP_OSCILLATOR_RATE, gui::m_reverb::FMOD_DSP_OSCILLATOR_RATE);
			break;

		case (int)FMOD_DSP_TYPE_LOWPASS:
			reverbdsp->setParameterFloat(FMOD_DSP_LOWPASS_CUTOFF, gui::m_reverb::FMOD_DSP_LOWPASS_CUTOFF);
			reverbdsp->setParameterFloat(FMOD_DSP_LOWPASS_RESONANCE, gui::m_reverb::FMOD_DSP_LOWPASS_RESONANCE);
			break;

		case (int)FMOD_DSP_TYPE_ITLOWPASS:
			reverbdsp->setParameterFloat(FMOD_DSP_ITLOWPASS_CUTOFF, gui::m_reverb::FMOD_DSP_ITLOWPASS_CUTOFF);
			break;

		case (int)FMOD_DSP_TYPE_HIGHPASS:
			reverbdsp->setParameterFloat(FMOD_DSP_HIGHPASS_CUTOFF, gui::m_reverb::FMOD_DSP_HIGHPASS_CUTOFF);
			reverbdsp->setParameterFloat(FMOD_DSP_HIGHPASS_RESONANCE, gui::m_reverb::FMOD_DSP_HIGHPASS_RESONANCE);
			break;

		case (int)FMOD_DSP_TYPE_ECHO:
			reverbdsp->setParameterFloat(FMOD_DSP_ECHO_DELAY, gui::m_reverb::FMOD_DSP_ECHO_DELAY);
			reverbdsp->setParameterFloat(FMOD_DSP_ECHO_FEEDBACK, gui::m_reverb::FMOD_DSP_ECHO_FEEDBACK);
			reverbdsp->setParameterFloat(FMOD_DSP_ECHO_DRYLEVEL, gui::m_reverb::FMOD_DSP_ECHO_DRYLEVEL);
			reverbdsp->setParameterFloat(FMOD_DSP_ECHO_WETLEVEL, gui::m_reverb::FMOD_DSP_ECHO_WETLEVEL);
			break;

		case (int)FMOD_DSP_TYPE_FADER:
			reverbdsp->setParameterFloat(FMOD_DSP_FADER_GAIN, gui::m_reverb::FMOD_DSP_FADER_GAIN);
			break;

		case (int)FMOD_DSP_TYPE_FLANGE:
			reverbdsp->setParameterFloat(FMOD_DSP_FLANGE_MIX, gui::m_reverb::FMOD_DSP_FLANGE_MIX);
			reverbdsp->setParameterFloat(FMOD_DSP_FLANGE_DEPTH, gui::m_reverb::FMOD_DSP_FLANGE_DEPTH);
			reverbdsp->setParameterFloat(FMOD_DSP_FLANGE_RATE, gui::m_reverb::FMOD_DSP_FLANGE_RATE);
			break;

		case (int)FMOD_DSP_TYPE_DISTORTION:
			reverbdsp->setParameterFloat(FMOD_DSP_DISTORTION_LEVEL, gui::m_reverb::FMOD_DSP_DISTORTION_LEVEL);
			break;

		case (int)FMOD_DSP_TYPE_NORMALIZE:
			reverbdsp->setParameterFloat(FMOD_DSP_NORMALIZE_FADETIME, gui::m_reverb::FMOD_DSP_NORMALIZE_FADETIME);
			reverbdsp->setParameterFloat(FMOD_DSP_NORMALIZE_MAXAMP, gui::m_reverb::FMOD_DSP_NORMALIZE_MAXAMP);
			break;

		case (int)FMOD_DSP_TYPE_LIMITER:
			reverbdsp->setParameterFloat(FMOD_DSP_LIMITER_CEILING, gui::m_reverb::FMOD_DSP_LIMITER_CEILING);
			break;

		case (int)FMOD_DSP_TYPE_PARAMEQ:
			reverbdsp->setParameterFloat(FMOD_DSP_PARAMEQ_CENTER, gui::m_reverb::FMOD_DSP_PARAMEQ_CENTER);
			reverbdsp->setParameterFloat(FMOD_DSP_PARAMEQ_BANDWIDTH, gui::m_reverb::FMOD_DSP_PARAMEQ_BANDWIDTH);
			reverbdsp->setParameterFloat(FMOD_DSP_PARAMEQ_GAIN, gui::m_reverb::FMOD_DSP_PARAMEQ_GAIN);
			break;

		case (int)FMOD_DSP_TYPE_PITCHSHIFT:
			reverbdsp->setParameterFloat(FMOD_DSP_PITCHSHIFT_PITCH, gui::m_reverb::FMOD_DSP_PITCHSHIFT_PITCH);
			break;

		case (int)FMOD_DSP_TYPE_CHORUS:
			reverbdsp->setParameterFloat(FMOD_DSP_CHORUS_MIX, gui::m_reverb::FMOD_DSP_CHORUS_MIX);
			reverbdsp->setParameterFloat(FMOD_DSP_CHORUS_RATE, gui::m_reverb::FMOD_DSP_CHORUS_RATE);
			reverbdsp->setParameterFloat(FMOD_DSP_CHORUS_DEPTH, gui::m_reverb::FMOD_DSP_CHORUS_DEPTH);
			break;

		case (int)FMOD_DSP_TYPE_ITECHO:
			reverbdsp->setParameterFloat(FMOD_DSP_ITECHO_FEEDBACK, gui::m_reverb::FMOD_DSP_ITECHO_FEEDBACK);
			break;

		case (int)FMOD_DSP_TYPE_COMPRESSOR:
			reverbdsp->setParameterFloat(FMOD_DSP_COMPRESSOR_THRESHOLD, gui::m_reverb::FMOD_DSP_COMPRESSOR_THRESHOLD);
			reverbdsp->setParameterFloat(FMOD_DSP_COMPRESSOR_RATIO, gui::m_reverb::FMOD_DSP_COMPRESSOR_RATIO);
			reverbdsp->setParameterFloat(FMOD_DSP_COMPRESSOR_ATTACK, gui::m_reverb::FMOD_DSP_COMPRESSOR_ATTACK);
			reverbdsp->setParameterFloat(FMOD_DSP_COMPRESSOR_RELEASE, gui::m_reverb::FMOD_DSP_COMPRESSOR_RELEASE);
			break;

		case (int)FMOD_DSP_TYPE_SFXREVERB:
			reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DECAYTIME, gui::m_reverb::FMOD_DSP_SFXREVERB_DECAYTIME);
			reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DENSITY, gui::m_reverb::FMOD_DSP_SFXREVERB_DENSITY);
			reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DIFFUSION, gui::m_reverb::FMOD_DSP_SFXREVERB_DIFFUSION);
			reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_WETLEVEL, gui::m_reverb::FMOD_DSP_SFXREVERB_WETLEVEL);
			reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DRYLEVEL, gui::m_reverb::FMOD_DSP_SFXREVERB_DRYLEVEL);
			break;

		case (int)FMOD_DSP_TYPE_LOWPASS_SIMPLE:
			reverbdsp->setParameterFloat(FMOD_DSP_LOWPASS_SIMPLE_CUTOFF, gui::m_reverb::FMOD_DSP_LOWPASS_SIMPLE_CUTOFF);
			break;

		case (int)FMOD_DSP_TYPE_TREMOLO:
			reverbdsp->setParameterFloat(FMOD_DSP_TREMOLO_FREQUENCY, gui::m_reverb::FMOD_DSP_TREMOLO_FREQUENCY);
			reverbdsp->setParameterFloat(FMOD_DSP_TREMOLO_DEPTH, gui::m_reverb::FMOD_DSP_TREMOLO_DEPTH);
			reverbdsp->setParameterFloat(FMOD_DSP_TREMOLO_SKEW, gui::m_reverb::FMOD_DSP_TREMOLO_SKEW);
			break;

		case (int)FMOD_DSP_TYPE_HIGHPASS_SIMPLE:
			reverbdsp->setParameterFloat(FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF, gui::m_reverb::FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF);
			break;
		}
		/*
		CBot::fmodengine::system->createDSPByType(FMOD_DSP_TYPE_SFXREVERB, &reverbdsp);

		// Set parameters to simulate a cave (long decay, wet mix high)
		reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DECAYTIME, gui::reverb::m_decaytime);  // long decay (3 sec)
		reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_WETLEVEL, gui::reverb::m_wetlevel);     // wet level in dB (less negative = wetter)
		reverbdsp->setParameterFloat(FMOD_DSP_SFXREVERB_DRYLEVEL, gui::reverb::m_drylevel);      // dry level in dB
		*/
		currentchannel->addDSP(0, reverbdsp);
	}

	fmodengine::system->update();
}
