#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct TimerTest : game::Object
{
    static constexpr const char* NAME = "cpTimerTest";
    static constexpr const char* ALIAS = NAME;

    int32_t counter; // 230
    uint8_t unk234[0x238 - 0x234]; // 234
};
RED4EXT_ASSERT_SIZE(TimerTest, 0x238);
} // namespace cp
} // namespace RED4ext
