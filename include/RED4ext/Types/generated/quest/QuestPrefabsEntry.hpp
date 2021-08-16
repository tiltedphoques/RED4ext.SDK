#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/GlobalNodeRef.hpp>
#include <RED4ext/Types/generated/world/QuestPrefabLoadingMode.hpp>

namespace RED4ext
{
namespace quest { 
struct QuestPrefabsEntry
{
    static constexpr const char* NAME = "questQuestPrefabsEntry";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeRef nodeRef; // 00
    world::QuestPrefabLoadingMode loadingMode; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(QuestPrefabsEntry, 0x10);
} // namespace quest
} // namespace RED4ext
