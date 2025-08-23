#include "pch.h"

static void physStepCountMidhookStep1(SafetyHookContext& ctx)
{
    if (!PlayLayer::get())
    {
        return;
    }

    if (CBot::m_enabletpsbypass == true)
    {
        float physicsDt = 1.0f / CBot::m_tps;
        float currentDt = *(float*)(ctx.rbp);
        ctx.r11 = (uint32_t)(int)fmaxf(1.0, roundf((float)(currentDt * 60.0 / fminf(PlayLayer::get()->m_gameState.m_timeWarp, 1.0)) * (CBot::m_tps / 60.f)));
    }
}


static void physStepCountMidhookStep2(SafetyHookContext& ctx)
{
    if (!PlayLayer::get())
    {
        return;
    }

    if (CBot::m_enabletpsbypass == true)
    {
        float physicsDt = 1.0f / CBot::m_tps;
        float currentDt = *(float*)(ctx.rbp);
        float estimatedStepCount = currentDt / physicsDt;
        ctx.xmm15.f64[0] = physicsDt * estimatedStepCount;
    }
}

$on_mod(Loaded) {
    enableconsole();
    
    std::println("This is CBot console, it is used for debugging errors or CBot");
    static uintptr_t GeometryDashBase = (uintptr_t)GetModuleHandle(0);
    static SafetyHookMid step1_hook = safetyhook::create_mid((void*)(GeometryDashBase + 0x2322d7), physStepCountMidhookStep1);
    static SafetyHookMid step2_hook = safetyhook::create_mid((void*)(GeometryDashBase + 0x23325e), physStepCountMidhookStep2);

    random::initalize();
    CBot::fmodengine::init();
};