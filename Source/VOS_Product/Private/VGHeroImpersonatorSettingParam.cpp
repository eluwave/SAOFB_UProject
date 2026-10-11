#include "VGHeroImpersonatorSettingParam.h"

FVGHeroImpersonatorSettingParam::FVGHeroImpersonatorSettingParam() {
    this->character_id = EVGHeroImpersonatorCharacter::None;
    this->character_unique = EVGCharaUnique::None;
    this->customize_index = 0;
    this->progress_flag = 0;
    this->required_content = EVGHeroImpersonatorRequiredContent::None;
}

