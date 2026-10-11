#include "VGBattleTalkManager.h"

UVGBattleTalkManager::UVGBattleTalkManager() {
    this->m_buffers.AddDefaulted(64);
    this->m_last_speaker = NULL;
}

