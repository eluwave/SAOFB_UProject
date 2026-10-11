#include "VGActionAsset.h"

UVGActionAsset::UVGActionAsset() {
    this->action_id = 0;
    this->Priority = 100;
    this->layer_index = 0;
    this->is_reset_subaction = true;
    this->ignore_sub_reservation = false;
    this->is_inherit_vel_x = true;
    this->is_inherit_vel_y = true;
    this->is_inherit_vel_z = true;
    this->is_inherit_motion_vel_x = false;
    this->is_inherit_motion_vel_y = false;
    this->is_inherit_motion_vel_z = false;
    this->is_inherit_motion_acc_x = false;
    this->is_inherit_motion_acc_y = false;
    this->is_inherit_motion_acc_z = false;
}

