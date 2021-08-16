#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIStateCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIStateCond_Record";
    static constexpr const char* ALIAS = "AIStateCond_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIStateCond_Record, 0x60);
} // namespace game::data
using AIStateCond_Record = game::data::AIStateCond_Record;
} // namespace RED4ext
