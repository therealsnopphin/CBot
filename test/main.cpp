#include "pch.h"

$on_mod(Loaded) {
    enableconsole();
    
    std::println("This is CBot console, it is used for debugging errors or CBot");
    random::initalize();
    CBot::fmodengine::init();
};