#include "VGAvatarCustomizeSetting.h"

UVGAvatarCustomizeSetting::UVGAvatarCustomizeSetting() {
    this->m_items.AddDefaulted(5);
    this->m_is_accessory_hidden.AddDefaulted(2);
    this->m_voice_type = 0;
    this->m_override_voice_chara = EVGCharaUnique::None;
}

