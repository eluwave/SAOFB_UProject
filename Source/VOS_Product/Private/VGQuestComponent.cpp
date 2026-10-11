#include "VGQuestComponent.h"

UVGQuestComponent::UVGQuestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_started_ui_class = NULL;
    this->m_quest_completed_ui_class = NULL;
    this->m_quest_task_ui_class = NULL;
    this->m_quest_sign_ui_class = NULL;
    this->m_quest_dialog = NULL;
    this->m_task_dialog = NULL;
    this->m_widget_component = NULL;
    this->m_ui_sign = NULL;
}

FName UVGQuestComponent::GetCharacterID() const {
    return NAME_None;
}

