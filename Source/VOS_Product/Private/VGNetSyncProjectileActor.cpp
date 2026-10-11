#include "VGNetSyncProjectileActor.h"

AVGNetSyncProjectileActor::AVGNetSyncProjectileActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_velocity = 0.00f;
    this->m_acceleration = 0.00f;
    this->m_velocity_limit = 0.00f;
    this->m_end_hitbox_class = NULL;
    this->m_is_offset_block = false;
    this->m_ignore_end_hitbox = false;
}

