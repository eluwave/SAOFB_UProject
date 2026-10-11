#include "VGBattleTalkSpeaker.h"

FVGBattleTalkSpeaker::FVGBattleTalkSpeaker() {
    this->speaker = EVGBattleTalkSpeaker::Self;
    this->gender = EVGCharaGender::Male;
    this->Type = 0;
}

