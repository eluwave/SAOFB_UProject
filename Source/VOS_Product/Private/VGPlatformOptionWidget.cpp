#include "VGPlatformOptionWidget.h"

UVGPlatformOptionWidget::UVGPlatformOptionWidget() {
    this->m_key_custom_data = NULL;
    this->m_default = NULL;
    this->m_key_assign_class = NULL;
    this->m_select_key_set_index = 0;
    this->m_option_list = NULL;
    this->m_tab_list = NULL;
    this->m_sub_menu = NULL;
    this->m_resolution_dialog = NULL;
}

void UVGPlatformOptionWidget::SetResolutionArray(TArray<FIntPoint> Resolutions) {
}

void UVGPlatformOptionWidget::Open() {
}

void UVGPlatformOptionWidget::Close(bool bRemove) {
}

