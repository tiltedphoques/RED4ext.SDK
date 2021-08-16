#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/PhysicsParticleInitializer.hpp>

namespace RED4ext
{
struct VelocityEvaluator : PhysicsParticleInitializer
{
    static constexpr const char* NAME = "VelocityEvaluator";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x48 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(VelocityEvaluator, 0x48);
} // namespace RED4ext
