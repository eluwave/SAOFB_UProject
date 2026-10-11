#include "VGStatusAgent.h"

AVGStatusAgent::AVGStatusAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->status_widget_class = NULL;
    this->m_calc_component_class = NULL;
    this->m_passive_skill_component_class = NULL;
    this->m_status_widget = NULL;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
    this->m_subscene = NULL;
}

void AVGStatusAgent::Start() {
}

