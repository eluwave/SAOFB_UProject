#include "VGLoadingTips.h"

UVGLoadingTips::UVGLoadingTips() {
    this->k_tips_display_sec = 0.00f;
    this->k_max_tips_display_num = 0;
    this->m_tips_image = NULL;
    this->m_tips_agent = NULL;
    this->m_mode_info = NULL;
    this->m_register_tips_type = EVGLoadingTipsTypeId::Invalid;
    this->m_register_tips_img = NULL;
}

void UVGLoadingTips::StartTipsAutoChange() {
}

void UVGLoadingTips::SpecifyTipsData(EVGLoadingTipsTypeId tips_type, const FName& ID, UTexture2D* tips_img) {
}

