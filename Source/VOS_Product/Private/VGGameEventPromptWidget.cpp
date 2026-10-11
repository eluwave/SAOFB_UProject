#include "VGGameEventPromptWidget.h"

UVGGameEventPromptWidget::UVGGameEventPromptWidget() {
    this->m_transparency = 0.00f;
    this->m_decide_icon = NULL;
    this->m_resurrect_icon = NULL;
}

void UVGGameEventPromptWidget::OnPromptTypeChanged_Implementation(EVGGameEventInteractPromptType Type) {
}

UTexture2D* UVGGameEventPromptWidget::GetResurrectIcon() const {
    return NULL;
}

EVGGameEventInteractPromptType UVGGameEventPromptWidget::GetPromptType() const {
    return EVGGameEventInteractPromptType::Talk;
}

UTexture2D* UVGGameEventPromptWidget::GetDecideIcon() const {
    return NULL;
}

