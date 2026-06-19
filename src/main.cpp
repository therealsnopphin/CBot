#include <imgui-cocos.hpp>
#include "utilities/SimpleFMOD.h"
#include "utilities/fast_random.h"
#include "clickpackhandler.h"
#include "menu.h"

$on_mod(Loaded) {
	SimpleFMOD::GetInstance().Initalize();

	fast_random::initalize();

	ImGuiCocos::get().setup([] {
		std::filesystem::create_directories(".cbot/clickpacks");
		menu::InitalizeTheme();
		}).draw([] {
			if (menu::config::GetConfig().m_showmenu)
			{
				clickpackhandler& handler = clickpackhandler::Get();
				handler.LoadClickpacks();
				menu::DrawMenu();
			}
			});
}