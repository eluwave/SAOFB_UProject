#include "VGANSActionHoming.h"

UVGANSActionHoming::UVGANSActionHoming() {
    this->target_range = 0.00f;
    this->target_rotate = 0.00f;
    this->rotate_per_sec = 0.00f;
    this->end_range = 100.00f;
    this->action_id = -1;
    this->add_rotate = 0.00f;
    this->limit_time = 0.00f;
    this->limit_rotate = 0.00f;
}

