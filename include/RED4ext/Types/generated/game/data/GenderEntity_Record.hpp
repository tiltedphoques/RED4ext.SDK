#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct GenderEntity_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataGenderEntity_Record";
    static constexpr const char* ALIAS = "GenderEntity_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GenderEntity_Record, 0x58);
} // namespace game::data
using GenderEntity_Record = game::data::GenderEntity_Record;
} // namespace RED4ext
