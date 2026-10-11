#include "VGCustomizeGameMode.h"

AVGCustomizeGameMode::AVGCustomizeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_customize_agent_class = NULL;
    this->m_customize_sheet = NULL;
    this->m_action_library[0] = NULL;
    this->m_action_library[1] = NULL;
    this->m_customize_agent = NULL;
    this->m_avatar[0] = NULL;
    this->m_avatar[1] = NULL;
    this->m_camera = NULL;
}

