#include "VGTitleState.h"

AVGTitleState::AVGTitleState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_title_widget_class = NULL;
    this->m_title_menu_data = NULL;
    this->m_option_agent_class = NULL;
    this->m_platform_option_agent_class = NULL;
    this->m_option_agent = NULL;
    this->m_title_widget = NULL;
}

