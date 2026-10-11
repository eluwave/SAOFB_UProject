#include "VGTerminalAgent.h"

AVGTerminalAgent::AVGTerminalAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_shop_action_widget_class = NULL;
    this->m_customize_slot_agent_class = NULL;
    this->m_skill_learn_agent_class = NULL;
    this->m_skill_equip_agent_class = NULL;
    this->m_option_agent_class = NULL;
    this->m_shop_action_widget = NULL;
    this->m_customize_slot_agent = NULL;
    this->m_skill_learn_agent = NULL;
    this->m_skill_equip_agent = NULL;
    this->m_option_agent = NULL;
    this->m_dialog = NULL;
}

void AVGTerminalAgent::Start() {
}

void AVGTerminalAgent::SetTerminalAsset(UVGTerminalAsset* Asset) {
}

