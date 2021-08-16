#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/projectile/ShootEvent.hpp>

namespace RED4ext
{
namespace game::projectile { 
struct ShootTargetEvent : game::projectile::ShootEvent
{
    static constexpr const char* NAME = "gameprojectileShootTargetEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ShootTargetEvent, 0x1B0);
} // namespace game::projectile
} // namespace RED4ext
