#include "VG3DHudStatusComponent.h"

UVG3DHudStatusComponent::UVG3DHudStatusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HpBarNum = 1;
    this->m_widget_class = NULL;
    this->m_status_type = EVG3DHudStatusType::None;
}

