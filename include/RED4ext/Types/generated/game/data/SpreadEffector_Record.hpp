#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct SpreadEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataSpreadEffector_Record";
    static constexpr const char* ALIAS = "SpreadEffector_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(SpreadEffector_Record, 0x68);
} // namespace game::data
using SpreadEffector_Record = game::data::SpreadEffector_Record;
} // namespace RED4ext
