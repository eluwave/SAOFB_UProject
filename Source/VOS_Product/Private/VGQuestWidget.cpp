#include "VGQuestWidget.h"

UVGQuestWidget::UVGQuestWidget() {
    this->m_tv_quest = NULL;
    this->m_ui_details = NULL;
}

void UVGQuestWidget::OpenQuest() {
}

FText UVGQuestWidget::GetQuestTitle() const {
    return FText::GetEmpty();
}

int32 UVGQuestWidget::GetQuestDifficulty() const {
    return 0;
}

FText UVGQuestWidget::GetQuestDescription() const {
    return FText::GetEmpty();
}

ESlateVisibility UVGQuestWidget::GetInfoVisibility() const {
    return ESlateVisibility::Visible;
}

ESlateVisibility UVGQuestWidget::GetBGVisibility() const {
    return ESlateVisibility::Visible;
}

