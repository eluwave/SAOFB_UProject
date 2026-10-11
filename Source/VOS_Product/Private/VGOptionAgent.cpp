#include "VGOptionAgent.h"

AVGOptionAgent::AVGOptionAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_option_widget_class = NULL;
    this->m_option_menu_data = NULL;
    this->m_option_widget = NULL;
    this->m_sound_tab_is_valid = true;
    this->m_camera_tab_is_valid = true;
    this->m_controller_tab_is_valid = true;
    this->m_hud_tab_is_valid = true;
    this->m_etc_tab_is_valid = true;
}

void AVGOptionAgent::Start() {
}

