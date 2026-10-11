#include "VGQuestInfoWidget.h"

UVGQuestInfoWidget::UVGQuestInfoWidget() {
    this->m_quest = NULL;
    this->m_quest_asset = NULL;
}

bool UVGQuestInfoWidget::IsNotifyMainQuest() const {
    return false;
}

bool UVGQuestInfoWidget::IsMainQuest() const {
    return false;
}

bool UVGQuestInfoWidget::HasCurrentQuest() const {
    return false;
}

FText UVGQuestInfoWidget::GetNotifyTitle() const {
    return FText::GetEmpty();
}

FText UVGQuestInfoWidget::GetNotifyBody() const {
    return FText::GetEmpty();
}

FText UVGQuestInfoWidget::GetCurrentTask() const {
    return FText::GetEmpty();
}

FText UVGQuestInfoWidget::GetCurrentQuestTitle() const {
    return FText::GetEmpty();
}

void UVGQuestInfoWidget::FlipTaskText() {
}

