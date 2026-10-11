#include "VGBTT_RequestBattleTalk.h"

UVGBTT_RequestBattleTalk::UVGBTT_RequestBattleTalk() {
    this->NodeName = TEXT("VG Request Battle Talk");
    this->m_trigger_id = EVGBattleTalkTrigger::Ailments;
}

