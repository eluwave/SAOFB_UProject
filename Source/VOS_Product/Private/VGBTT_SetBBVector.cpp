#include "VGBTT_SetBBVector.h"

UVGBTT_SetBBVector::UVGBTT_SetBBVector() {
    this->NodeName = TEXT("VGBTT SetBBVector");
    this->m_source = EVGBTLocationTargetBB::AttackTarget;
    this->m_distance = 0.00f;
    this->m_distance_random_deviation = 0.00f;
    this->m_yaw = 0.00f;
    this->m_yaw_random_deviation = 0.00f;
    this->m_hight = 0.00f;
    this->m_hight_random = 0.00f;
}

