#include "VGBTT_ChangeGuidedMissileMode.h"

UVGBTT_ChangeGuidedMissileMode::UVGBTT_ChangeGuidedMissileMode() {
    this->NodeName = TEXT("VGBTT_ChangeGuidedMissileMode");
    this->m_interval = 0.00f;
    this->m_mode = EVGGuidedMissileMode::Straight;
}

