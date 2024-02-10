#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct FixedPoint
{
    static constexpr const char* NAME = "FixedPoint";
    static constexpr const char* ALIAS = NAME;

    float AsFloat() const
    {
        return Bits * 0.0000076293945;
    }

    operator float()
    {
        return AsFloat();
    }

    FixedPoint& operator=(float value)
    {
        Bits = value /  0.0000076293945;
        return *this;
    }

    int32_t Bits; // 00
};
RED4EXT_ASSERT_SIZE(FixedPoint, 0x4);
} // namespace RED4ext

// clang-format on
