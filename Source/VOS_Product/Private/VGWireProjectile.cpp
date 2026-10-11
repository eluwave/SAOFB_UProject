#include "VGWireProjectile.h"

AVGWireProjectile::AVGWireProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_velocity = 1.00f;
    this->m_accel = 0.00f;
    this->k_angle_ground = 45.00f;
    this->k_angle_ceil = -20.00f;
    this->m_begin_vfx = NULL;
}

