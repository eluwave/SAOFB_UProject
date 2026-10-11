#include "VGDlcStaffRollAgent.h"

AVGDlcStaffRollAgent::AVGDlcStaffRollAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_to_be_continued_wait_time = 0.00f;
    this->m_is_to_be_continued_enable = true;
    this->m_is_long_fade_out = false;
    this->m_3d_img_actor = NULL;
}

void AVGDlcStaffRollAgent::Start() {
}

