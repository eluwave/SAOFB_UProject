#include "VGCharacterSetup.h"

FVGCharacterSetup::FVGCharacterSetup() {
    this->ID = EVGCharaUnique::None;
    this->gender = EVGCharaGender::Male;
    this->avatar_figure = NULL;
    this->level_table = NULL;
    this->equip_table = NULL;
}

