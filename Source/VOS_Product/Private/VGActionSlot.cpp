#include "VGActionSlot.h"

FVGActionSlot::FVGActionSlot() {
    this->ID = 0;
    this->action = NULL;
    this->prev_action = NULL;
    this->Time = 0.00f;
    this->current_time = 0.00f;
    this->last_time = 0.00f;
    this->is_anim_finished = false;
    this->event_state_flag = 0;
}

