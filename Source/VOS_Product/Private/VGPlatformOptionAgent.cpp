#include "VGPlatformOptionAgent.h"

AVGPlatformOptionAgent::AVGPlatformOptionAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_option_widget_class = NULL;
    this->m_option_menu_data = NULL;
    this->m_option_widget = NULL;
    this->m_graphics_tab_is_valid = true;
    this->m_keyboard_tab_is_valid = true;
    this->m_controller_tab_is_valid = true;
    this->m_language_tab_is_valid = true;
}

void AVGPlatformOptionAgent::Start() {
}

