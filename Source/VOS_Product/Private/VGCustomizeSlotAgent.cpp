#include "VGCustomizeSlotAgent.h"

AVGCustomizeSlotAgent::AVGCustomizeSlotAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widget_class = NULL;
    this->m_calc_component_class = NULL;
    this->m_widget = NULL;
    this->m_tutorial_agent = NULL;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
}

void AVGCustomizeSlotAgent::Start() {
}

