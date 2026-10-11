#include "VGSkillEquipAgent.h"

AVGSkillEquipAgent::AVGSkillEquipAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->skillequip_widget_class = NULL;
    this->m_calc_component_class = NULL;
    this->m_skillequip_widget = NULL;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
}

void AVGSkillEquipAgent::Start() {
}

void AVGSkillEquipAgent::SetMode(EVGSkillEquipMode mode) {
}

void AVGSkillEquipAgent::SetCharacterID(EVGCharaUnique ID) {
}

