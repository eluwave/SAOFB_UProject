#include "VGBTT_FlyToRoute.h"

UVGBTT_FlyToRoute::UVGBTT_FlyToRoute() {
    this->NodeName = TEXT("VGBTT FlyToRoute");
    this->m_height_type = EVGBTHeightType::TargetOffset;
    this->m_height = 0.00f;
    this->m_exec_time = 0.00f;
}

