#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::data
{
    
struct Val {
    uint32_t hash; // 00
    uint8_t length; // 04
    uint8_t tbdOffsetBE[3]; // 05
    uint8_t unk08; // 08 scope lock
    uint8_t unk09; // 09 set to TweakDB->unk160 & checked against it
    uint8_t unk0A; // 0A
    uint8_t unk0B; // 0B
};

struct TweakDBRecord : IScriptable
{
    static constexpr const char* NAME = "gamedataTweakDBRecord";
    static constexpr const char* ALIAS = "TweakDBRecord";

    virtual void sub_108() { }                    // 108
    virtual uint32_t GetTweakBaseHash() const { return 0; } // 110 - Murmur3 of record type name

    TweakDBID recordID;
};
RED4EXT_ASSERT_SIZE(TweakDBRecord, 0x48);
} // namespace game::data
using gamedataTweakDBRecord = game::data::TweakDBRecord;
using TweakDBRecord = game::data::TweakDBRecord;
} // namespace RED4ext
