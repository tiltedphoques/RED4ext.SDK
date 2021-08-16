#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/IUIObjectsLoaderSystemListener.hpp>

namespace RED4ext
{
namespace itempreview { 
struct UIObjectsLoaderSystemListener : game::ui::IUIObjectsLoaderSystemListener
{
    static constexpr const char* NAME = "itempreviewUIObjectsLoaderSystemListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(UIObjectsLoaderSystemListener, 0x40);
} // namespace itempreview
} // namespace RED4ext
