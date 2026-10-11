#include "VGGadgetCover.h"

AVGGadgetCover::AVGGadgetCover(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_begin_vfx = NULL;
    this->m_end_vfx = NULL;
    this->m_hit_vfx = NULL;
    this->m_cover_radius = 0.00f;
    this->m_cover_angle = 0.00f;
    this->m_cover_height = 0.00f;
}

