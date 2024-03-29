#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationState.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationState : game::ui::ICharacterCustomizationState
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationState";
    static constexpr const char* ALIAS = NAME;

    // uint8_t unk40[0xF0 - 0x40]; // 40

    uint8_t unk40; // 40
    bool isFinalized; // 41
    bool unk42; // 42
    uint8_t isNewGame; // 43
    uint8_t isBodyGenderMale; // 44
    uint8_t isBrainGenterMale; // 45
    uint32_t lifePath; // 48
    uint32_t unk4C;
    uint32_t attributePointsAvailable; // 50
    DynArray<struct CharacterCustomizationAttribute> attributes; // 58
    uint8_t unk68; // 68
    DynArray<struct CustomizationGroup> unk70; // 70 head
    DynArray<struct CustomizationGroup> unk80; // 80 body
    DynArray<struct CustomizationGroup> unk90; // 90 arms
    DynArray<struct PerspectiveInfo> perspectiveInfo; // A0
    DynArray<CName> tags; // B0
    uint32_t version; // C0
    uint32_t unkC4; // C4
    uint64_t unkC8; // C8 used in callbacks
    uint64_t unkD0;
    uint64_t unkD8;
    uint64_t unkE0;
    uint64_t unkE8; // E8 callback

};
RED4EXT_ASSERT_SIZE(CharacterCustomizationState, 0xF0);
} // namespace game::ui
using gameuiCharacterCustomizationState = game::ui::CharacterCustomizationState;
} // namespace RED4ext

// clang-format on
