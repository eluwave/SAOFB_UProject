#include "VGVfxSignal.h"

FVGVfxSignal::FVGVfxSignal() {
    this->particle = NULL;
    this->is_attached = false;
    this->is_camera_attached = false;
    this->is_ignore_node_roll = false;
    this->is_ignore_node_yaw = false;
    this->is_ignore_node_pitch = false;
    this->is_local_user_only = false;
    this->delay_time = 0.00f;
    this->cancel_type = EVGVfxCancelType::LeaveParticle;
    this->is_earth = false;
    this->is_landscape_only = false;
    this->move_limit = 0.00f;
}

