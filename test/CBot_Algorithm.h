#pragma once

enum class ClickType
{
	NormalClick, SoftClick, HardClick,
	NormalRelease, SoftRelease, HardRelease
};

struct ClickAudioType
{
	ClickType clickType;
	int click;
};

struct ClickAudio
{
	std::string clickpathfilename;
};

namespace CBot
{
	ClickType CheckClickType(const std::string& ClickPack, bool SoftClick, bool HardClick, bool IsHolding);
}