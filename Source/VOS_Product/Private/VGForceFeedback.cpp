#include "VGForceFeedback.h"

FVGForceFeedback::FVGForceFeedback() {
    this->Priority = 0;
    this->Intensity = 0.00f;
    this->Duration = 0.00f;
    this->affects_left_large = false;
    this->affects_left_small = false;
    this->affects_right_large = false;
    this->affects_right_small = false;
}

