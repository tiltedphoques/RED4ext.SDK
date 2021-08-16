#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/CooldownSystemEvent.hpp>

namespace RED4ext
{
namespace game { 
struct RemoveCooldownEvent : game::CooldownSystemEvent
{
    static constexpr const char* NAME = "gameRemoveCooldownEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(RemoveCooldownEvent, 0x48);
} // namespace game
} // namespace RED4ext
