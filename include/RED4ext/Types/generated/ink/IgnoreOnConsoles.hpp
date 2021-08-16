#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink { 
struct IgnoreOnConsoles : ink::UserData
{
    static constexpr const char* NAME = "inkIgnoreOnConsoles";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IgnoreOnConsoles, 0x40);
} // namespace ink
} // namespace RED4ext
