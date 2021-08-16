#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest { 
struct IAudioCharacterManager_NodeSubTypeCharacterEntry
{
    static constexpr const char* NAME = "questIAudioCharacterManager_NodeSubTypeCharacterEntry";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 00
    bool isPlayer; // 38
    bool enableSubSystem; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
};
RED4EXT_ASSERT_SIZE(IAudioCharacterManager_NodeSubTypeCharacterEntry, 0x40);
} // namespace quest
} // namespace RED4ext
