#pragma once


enum class ClickType
{
	NormalClick, SoftClick,
	NormalRelease, SoftRelease
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

namespace std {
	template <>
	struct hash<ClickAudioType> {
		std::size_t operator()(const ClickAudioType& t) const noexcept {
			return (static_cast<std::size_t>(t.clickType) << 1) ^ std::hash<int>()(t.click);
		}
	};

	template <>
	struct equal_to<ClickAudioType> {
		bool operator()(const ClickAudioType& lhs, const ClickAudioType& rhs) const noexcept {
			return lhs.clickType == rhs.clickType && lhs.click == rhs.click;
		}
	};
}

class clickpackhandler
{
public:
	//Loads player 1 and player 2 clickpacks
	void LoadCurrentPlayer1Clickpack(const std::string& clickpackpath);
	void LoadCurrentPlayer2Clickpack(const std::string& clickpackpath);

	void LoadClickpacks();
	ClickType CheckClickType(bool SoftClick, bool IsHolding);

	static clickpackhandler& Get()
	{
		static clickpackhandler instance;
		return instance;
	}
public:
	std::vector<std::string> m_clickpacks;
	std::vector<const char*> m_clickpacks_cstr;

	//Preloaded clickpack paths
	std::unordered_map<ClickAudioType, ClickAudio> m_Player1ClickAudios;
	std::unordered_map<ClickType, int> m_Player1CountClickAudios;

	std::unordered_map<ClickAudioType, ClickAudio> m_Player2ClickAudios;
	std::unordered_map<ClickType, int> m_Player2CountClickAudios;
};