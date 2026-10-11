#include "VG3DHudDeadIconComponent.h"

UVG3DHudDeadIconComponent::UVG3DHudDeadIconComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_is_node_attached = false;
    this->m_active_range = 15000.00f;
    this->m_max_distance_for_screen = 5000.00f;
    this->m_min_distance_for_screen = 1000.00f;
    this->m_max_scale_for_screen = 1.00f;
    this->m_min_scale_for_screen = 0.75f;
    this->m_aim_target_display_time = 3.00f;
}

