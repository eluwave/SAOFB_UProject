#include "VGANSActionBranch.h"

UVGANSActionBranch::UVGANSActionBranch() {
    this->Type = EVGActionBranch::Always;
    this->action_id = 0;
    this->early_frame = 0;
    this->early_time = 0.00f;
    this->wall_check_distance = 0.00f;
    this->probability = 0.00f;
}

