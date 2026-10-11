#include "VGBulletProjectile.h"

AVGBulletProjectile::AVGBulletProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_hit_decal_class = NULL;
    this->m_hit_decal_max = 0;
    this->m_vfx_interval = 1;
    this->m_explode_class = NULL;
    this->m_explode_rotator = EVGBulletAreaRotator::Zero;
}

