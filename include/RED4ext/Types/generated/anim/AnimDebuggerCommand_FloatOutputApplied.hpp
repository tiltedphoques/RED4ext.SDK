#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/anim/IAnimDebuggerCommand.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimDebuggerCommand_FloatOutputApplied : anim::IAnimDebuggerCommand
{
    static constexpr const char* NAME = "animAnimDebuggerCommand_FloatOutputApplied";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x20 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AnimDebuggerCommand_FloatOutputApplied, 0x20);
} // namespace anim
} // namespace RED4ext
