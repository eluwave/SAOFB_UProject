#include "VGMapObjectData.h"

FVGMapObjectData::FVGMapObjectData() {
    this->icon_type = EVGMapIconType::Player;
    this->icon_scale = 0.00f;
    this->name_display_type = EVGMapObjectNameDisplayType::Hide;
    this->initial_find_state = EVGMapObjectFindState::Unknown;
    this->activation_progress_id = 0;
    this->find_progress_id = 0;
    this->hide_in_kirito_mode = false;
}

