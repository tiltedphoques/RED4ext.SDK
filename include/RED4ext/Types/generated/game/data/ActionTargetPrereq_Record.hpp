#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ActionTargetPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataActionTargetPrereq_Record";
    static constexpr const char* ALIAS = "ActionTargetPrereq_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ActionTargetPrereq_Record, 0x58);
} // namespace game::data
using ActionTargetPrereq_Record = game::data::ActionTargetPrereq_Record;
} // namespace RED4ext
