#include "VGBTT_AddHate.h"

UVGBTT_AddHate::UVGBTT_AddHate() {
    this->NodeName = TEXT("VGBTT Hate Addition");
    this->m_target = EVGBTActorTarget::AttackTarget;
    this->m_value = 50.00f;
}

