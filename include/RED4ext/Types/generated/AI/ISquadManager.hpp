#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI { 
struct ISquadManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIISquadManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x400 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ISquadManager, 0x400);
} // namespace AI
} // namespace RED4ext
