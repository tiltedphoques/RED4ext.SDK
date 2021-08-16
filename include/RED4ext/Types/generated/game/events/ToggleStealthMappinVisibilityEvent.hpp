#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { 
struct ToggleStealthMappinVisibilityEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsToggleStealthMappinVisibilityEvent";
    static constexpr const char* ALIAS = NAME;

    bool show; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ToggleStealthMappinVisibilityEvent, 0x48);
} // namespace game::events
} // namespace RED4ext
