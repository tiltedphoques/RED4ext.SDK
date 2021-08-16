#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/AI/Position.hpp>

namespace RED4ext
{
namespace AI { 
struct CMovementTarget : AI::Position
{
    static constexpr const char* NAME = "AICMovementTarget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CMovementTarget, 0x20);
} // namespace AI
} // namespace RED4ext
