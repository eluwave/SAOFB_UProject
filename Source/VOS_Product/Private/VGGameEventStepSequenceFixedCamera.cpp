#include "VGGameEventStepSequenceFixedCamera.h"

UVGGameEventStepSequenceFixedCamera::UVGGameEventStepSequenceFixedCamera() {
    this->m_chara_captor_class = NULL;
    this->m_render_targets.AddDefaulted(4);
    this->m_chara_offset_fb = 200.00f;
    this->m_chara_offset_ud = 0.00f;
}

