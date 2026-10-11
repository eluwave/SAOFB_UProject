#include "VGDungeonRandomTransformComponent.h"

UVGDungeonRandomTransformComponent::UVGDungeonRandomTransformComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_offset_enable = false;
    this->m_rotate_enable = false;
    this->m_scale_enable = false;
    this->m_attach_parent = true;
}

