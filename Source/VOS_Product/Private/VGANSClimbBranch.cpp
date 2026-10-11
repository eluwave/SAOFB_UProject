#include "VGANSClimbBranch.h"

UVGANSClimbBranch::UVGANSClimbBranch() {
    this->action_id = 0;
    this->early_frame = 0;
    this->early_time = 0.00f;
    this->wall_depth = 0.00f;
    this->wall_depth_height = 0.00f;
    this->climb_depth = 0.00f;
    this->climb_depth_height = 0.00f;
    this->ground_check = true;
}

