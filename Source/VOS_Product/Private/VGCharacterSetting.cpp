#include "VGCharacterSetting.h"

FVGCharacterSetting::FVGCharacterSetting() {
    this->is_set = false;
    this->Level = 0;
    this->gender = EVGCharaGender::Male;
    this->team_id = EVGCharaTeam::None;
    this->start_id = 0;
    this->chara_id = EVGCharaUnique::None;
    this->origin_chara_id = EVGCharaUnique::None;
}

