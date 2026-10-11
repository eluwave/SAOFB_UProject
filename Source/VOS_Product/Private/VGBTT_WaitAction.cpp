#include "VGBTT_WaitAction.h"

UVGBTT_WaitAction::UVGBTT_WaitAction() {
    this->NodeName = TEXT("VGBTT WaitAction");
    this->m_check_interruptible = true;
    this->m_check_loop = false;
}

