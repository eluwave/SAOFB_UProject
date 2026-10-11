#include "VGBTT_PauseMovement.h"

UVGBTT_PauseMovement::UVGBTT_PauseMovement() {
    this->NodeName = TEXT("VGBTT Pause Movement");
    this->m_duration = 1.00f;
    this->m_override = false;
    this->m_inverse_state = false;
    this->m_sync = true;
}

