#include "VGHeroStruggleIconSetting.h"

FVGHeroStruggleIconSetting::FVGHeroStruggleIconSetting() {
    this->chara_id = EVGCharaUnique::None;
    this->customize_index = 0;
    this->chara_icon_index = 0;
    this->icon_type = EVGHeroStruggleIconType::TYPE_1;
    this->chara_icon_image = NULL;
    this->selected_chara_image = NULL;
    this->has_check_additional_content = false;
    this->is_usable_trial_rom = false;
}

