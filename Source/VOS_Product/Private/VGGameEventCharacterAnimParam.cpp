#include "VGGameEventCharacterAnimParam.h"

FVGGameEventCharacterAnimParam::FVGGameEventCharacterAnimParam() {
    this->Animation = NULL;
    this->play_speed = 0.00f;
    this->Layer = EVGGameEventCharacterAnimLayer::Base;
    this->loop_count = 0;
}

