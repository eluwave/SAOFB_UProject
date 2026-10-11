#include "VGBTT_MoveToPlayer.h"

UVGBTT_MoveToPlayer::UVGBTT_MoveToPlayer() {
    this->NodeName = TEXT("VGBTT MoveToPlayer");
    this->bProjectGoalLocation = false;
    this->m_distance = 200.00f;
    this->m_reflesh_interval = 0.05f;
}

