#include "VGMarksActionCounter.h"

FVGMarksActionCounter::FVGMarksActionCounter() {
    this->counter = 0.00f;
    this->last_forming_time = 0.00f;
    this->last_forming_chara_id = 0;
    this->achievement_time = 0.00f;
    this->achievement_chara_id = 0;
    this->cool_timer = 0.00f;
}

