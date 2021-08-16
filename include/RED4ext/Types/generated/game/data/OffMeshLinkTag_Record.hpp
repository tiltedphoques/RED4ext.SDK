#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct OffMeshLinkTag_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataOffMeshLinkTag_Record";
    static constexpr const char* ALIAS = "OffMeshLinkTag_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(OffMeshLinkTag_Record, 0x58);
} // namespace game::data
using OffMeshLinkTag_Record = game::data::OffMeshLinkTag_Record;
} // namespace RED4ext
