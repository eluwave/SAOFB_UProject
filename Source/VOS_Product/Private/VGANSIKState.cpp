#include "VGANSIKState.h"

UVGANSIKState::UVGANSIKState() {
    this->ik_layer = EVGIKLayer::Normal;
    this->ik_state = true;
    this->lerp_time = 0.00f;
    this->delayed_end = false;
    this->no_countup = false;
}

