#include "VGMapIconComponent.h"

UVGMapIconComponent::UVGMapIconComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_name_display_type = EVGMapObjectNameDisplayType::Hide;
    this->m_icon_type = EVGMapIconType::None;
    this->m_icon_scale = 1.00f;
    this->m_icon_type_auto_set = true;
}

