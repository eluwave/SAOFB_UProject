#include "VGEquipAgent.h"

AVGEquipAgent::AVGEquipAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->equip_widget_class = NULL;
    this->m_calc_component_class = NULL;
    this->m_equip_widget = NULL;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
    this->m_subscene = NULL;
}

void AVGEquipAgent::Start() {
}

