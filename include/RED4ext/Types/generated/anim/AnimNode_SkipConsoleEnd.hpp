#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Types/generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_SkipConsoleEnd : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_SkipConsoleEnd";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink inputLink; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_SkipConsoleEnd, 0x60);
} // namespace anim
} // namespace RED4ext
