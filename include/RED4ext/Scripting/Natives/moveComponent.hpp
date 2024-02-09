#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IMoverComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace move
{
struct __declspec(align(0x10)) Component : ent::IMoverComponent
{
    static constexpr const char* NAME = "moveComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x220 - 0x90]; // 90
    Vector3 speed; // 220
    uint8_t unk22C[0x2C0 - 0x22C]; // 22C
};
} // namespace move
} // namespace RED4ext

// clang-format on
