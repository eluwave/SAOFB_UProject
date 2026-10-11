#include "VGSkillLearnAgent.h"

AVGSkillLearnAgent::AVGSkillLearnAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_skilllearn_widget_class = NULL;
    this->m_calc_component_class = NULL;
    this->m_skilllearn_widget = NULL;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
}

void AVGSkillLearnAgent::Start() {
}

