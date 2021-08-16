#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/CombatNodeParams.hpp>

namespace RED4ext
{
namespace quest { 
struct CombatNodeParams_LookAtTarget : quest::CombatNodeParams
{
    static constexpr const char* NAME = "questCombatNodeParams_LookAtTarget";
    static constexpr const char* ALIAS = NAME;

    NodeRef targetNode; // 40
    game::EntityReference targetPuppet; // 48
    float duration; // 80
    bool immediately; // 84
    uint8_t unk85[0x88 - 0x85]; // 85
};
RED4EXT_ASSERT_SIZE(CombatNodeParams_LookAtTarget, 0x88);
} // namespace quest
} // namespace RED4ext
