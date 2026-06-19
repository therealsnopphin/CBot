
namespace menu
{
	struct config
	{
		bool m_showmenu = true;

		bool m_player1_softclicks = false;
		bool m_player1_hardclicks = false;
		bool m_player1_whitenoise = false;
		int m_selected_player1_clickpack_index = 0;

		bool m_player2_softclicks = false;
		bool m_player2_hardclicks = false;
		bool m_player2_whitenoise = false;
		int m_selected_player2_clickpack_index = 0;

		float m_minvolume = 1;
		float m_maxvolume = 1;

		static config& GetConfig()
		{
			static config instance;
			return instance;
		}
	};

	void InitalizeTheme();
	void DrawMenu();
}