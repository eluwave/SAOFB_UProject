#include "VGANSBulletLineBase.h"

UVGANSBulletLineBase::UVGANSBulletLineBase() {
    this->is_ignore_node_rotation = false;
    this->to_target = false;
    this->clamp_aim_limit = false;
    this->Speed = 5000.00f;
    this->init_length = 0.00f;
    this->display_range = 10000.00f;
    this->alert_time = 0.20f;
}

