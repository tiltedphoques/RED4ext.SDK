#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>

namespace RED4ext
{
namespace vehicle
{
struct Transmission {
    uint64_t unk00;
};
struct Engine {
    uint8_t unk00[0x61]; // 00
    uint8_t unk61; // 61
};
struct __declspec(align(0x10)) WheeledBaseObject : vehicle::BaseObject
{
    static constexpr const char* NAME = "vehicleWheeledBaseObject";
    static constexpr const char* ALIAS = "WheeledObject";

    void * interactionsMaybe;           // B90
    Transmission * transmissionData;    // B98
    Engine * engineData;                // BA0
    void * burnoutData;                 // BA8

    uint8_t unkBB0[0xBE0 - 0xBB0]; // BB0
};
RED4EXT_ASSERT_SIZE(WheeledBaseObject, 0xBE0);
} // namespace vehicle
using vehicleWheeledBaseObject = vehicle::WheeledBaseObject;
using WheeledObject = vehicle::WheeledBaseObject;
} // namespace RED4ext

// clang-format on
