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
struct Component;
struct MovementRepresentation
{
    Component* parent;
    bool active;
    DynArray<void*> stack;
    int32 activeIndex;
    void* activeEntry;
};

struct __declspec(align(0x10)) Component : ent::IMoverComponent
{
    static constexpr const char* NAME = "moveComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x138 - 0x90]; // 90
    MovementRepresentation representation;
    uint8_t unk1C8[0x220 - 0x168]; // 168
    Vector3 speed; // 220
    uint8_t unk22C[0x2C0 - 0x22C]; // 22C
};
} // namespace move
} // namespace RED4ext

RED4EXT_ASSERT_SIZE(RED4ext::move::MovementRepresentation, 0x30);
RED4EXT_ASSERT_OFFSET(RED4ext::move::MovementRepresentation, activeEntry, 0x28);
RED4EXT_ASSERT_OFFSET(RED4ext::move::Component, speed, 0x220);

// clang-format on
