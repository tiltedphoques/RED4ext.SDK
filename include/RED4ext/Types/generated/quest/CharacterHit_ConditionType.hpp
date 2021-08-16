#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/CharacterHitEventType.hpp>
#include <RED4ext/Types/generated/quest/ICharacterConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct CharacterHit_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterHit_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference targetRef; // 78
    bool isTargetPlayer; // B0
    uint8_t unkB1[0xB8 - 0xB1]; // B1
    DynArray<quest::CharacterHitEventType> includeHitTypes; // B8
    DynArray<quest::CharacterHitEventType> excludeHitTypes; // C8
    DynArray<CName> includeHitShapes; // D8
    DynArray<CName> excludeHitShapes; // E8
};
RED4EXT_ASSERT_SIZE(CharacterHit_ConditionType, 0xF8);
} // namespace quest
} // namespace RED4ext
