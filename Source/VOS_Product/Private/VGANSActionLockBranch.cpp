#include "VGANSActionLockBranch.h"

UVGANSActionLockBranch::UVGANSActionLockBranch() {
    this->succsess_action_id = 0;
    this->fail_action_id = 0;
    this->wait_time = 0.00f;
    this->early_frame = 0;
    this->early_time = 0.00f;
    this->Type = EVGLock::Prey;
}

