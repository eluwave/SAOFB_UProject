#include "VGAvatarCustomizeComponent.h"

UVGAvatarCustomizeComponent::UVGAvatarCustomizeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_current_setting = NULL;
    this->m_loading_setting = NULL;
    this->m_arrangement_setting = NULL;
    this->m_preset_setting = NULL;
    this->m_figure_setting = NULL;
    this->m_apply_on_begin = false;
    this->m_head_bounds_scale = 1.50f;
}

void UVGAvatarCustomizeComponent::SetSetting(UVGAvatarCustomizeSetting* setting) {
}

void UVGAvatarCustomizeComponent::RequestToApply() {
}

