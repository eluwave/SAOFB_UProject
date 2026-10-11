#include "VGQuestDialog.h"

UVGQuestDialog::UVGQuestDialog() {
    this->m_map_agent_class = NULL;
    this->m_ui_details = NULL;
    this->m_map_agent = NULL;
}

bool UVGQuestDialog::IsMainQuest() const {
    return false;
}

ESlateVisibility UVGQuestDialog::GetRewardVisibility() const {
    return ESlateVisibility::Visible;
}

FText UVGQuestDialog::GetRewardText() const {
    return FText::GetEmpty();
}

FText UVGQuestDialog::GetQuestTitle() const {
    return FText::GetEmpty();
}

ESlateVisibility UVGQuestDialog::GetInfoVisibility() const {
    return ESlateVisibility::Visible;
}

