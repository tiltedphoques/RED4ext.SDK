#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/AI/SquadBase.hpp>

namespace RED4ext
{
namespace AI { 
struct FollowerSquad : AI::SquadBase
{
    static constexpr const char* NAME = "AIFollowerSquad";
    static constexpr const char* ALIAS = "FollowerSquad";

    uint8_t unk110[0x168 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(FollowerSquad, 0x168);
} // namespace AI
using FollowerSquad = AI::FollowerSquad;
} // namespace RED4ext
