#include "VGNavModifierComponent.h"

UVGNavModifierComponent::UVGNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_update_interval = 1.00f;
    this->m_update_distance = 100.00f;
    this->m_update_shape = false;
}

