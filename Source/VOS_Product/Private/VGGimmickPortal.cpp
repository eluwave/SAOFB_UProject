#include "VGGimmickPortal.h"

AVGGimmickPortal::AVGGimmickPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_warp_point = NULL;
    this->m_nav_link = NULL;
    this->m_is_enable_NPC = true;
    this->m_force_warp_NPC = false;
    this->m_network_id = -1;
    this->m_warp_interval = 0.10f;
}

void AVGGimmickPortal::OnOverrideWarpCollision(AActor* Character) {
}

