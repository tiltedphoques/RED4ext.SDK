#pragma once

// clang-format off

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ECustomCameraTarget.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct Entity : IScriptable
{
    static constexpr const char* NAME = "entEntity";
    static constexpr const char* ALIAS = "Entity";

    uint8_t unk40[0xB0 - 0x40]; // 40
    IPlacedComponent* placedComponent; // B0
    uint8_t unkB8[0x154 - 0xB8]; // B8
    ECustomCameraTarget customCameraTarget; // 154
    uint8_t unk155[0x15B - 0x155]; // 155
    RenderSceneLayerMask renderSceneLayerMask; // 15B
    uint8_t unk15C[0x160 - 0x15C]; // 15C
};
} // namespace ent
} // namespace RED4ext

// clang-format on
