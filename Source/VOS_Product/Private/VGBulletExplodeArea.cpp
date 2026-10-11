#include "VGBulletExplodeArea.h"

AVGBulletExplodeArea::AVGBulletExplodeArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_hit_own = false;
    this->m_life_time = 0.10f;
}

