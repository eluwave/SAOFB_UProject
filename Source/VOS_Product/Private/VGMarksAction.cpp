#include "VGMarksAction.h"

FVGMarksAction::FVGMarksAction() {
    this->ID = 0;
    this->marks_icon = NULL;
    this->category_icon = NULL;
    this->medal_type = EVGMedal::Attack;
    this->count_type = EVGMarksCountType::Count;
    this->threshold = 0.00f;
    this->gauge_reduce_once = 0.00f;
    this->gauge_reduce_reach = 0.00f;
    this->ultimate_gauge_reduce_reach = 0.00f;
    this->combo_time = 0.00f;
    this->interval = 0.00f;
    this->reached_voice_cue_id = 0;
    this->response_voice_cue_id = 0;
}

