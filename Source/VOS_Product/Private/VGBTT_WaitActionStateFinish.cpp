#include "VGBTT_WaitActionStateFinish.h"

UVGBTT_WaitActionStateFinish::UVGBTT_WaitActionStateFinish() {
    this->NodeName = TEXT("VGBTT WaitActionStateFinish");
    this->m_time_out = 1.00f;
    this->m_time_out_result = true;
}

