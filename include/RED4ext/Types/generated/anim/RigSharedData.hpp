#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/anim/RigPart.hpp>

namespace RED4ext
{
namespace anim { struct IRigIkSetup; }

namespace anim { 
struct RigSharedData : CResource
{
    static constexpr const char* NAME = "animRigSharedData";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::RigPart> parts; // 40
    DynArray<Handle<anim::IRigIkSetup>> ikSetups; // 50
};
RED4EXT_ASSERT_SIZE(RigSharedData, 0x60);
} // namespace anim
} // namespace RED4ext
