#include "pch.h"

$on_mod(Loaded) {
    enableconsole();
    random::initalize();
    CBot::fmodengine::init();
};