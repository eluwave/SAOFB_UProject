#include "VGCoopLobbyListWidget.h"

UVGCoopLobbyListWidget::UVGCoopLobbyListWidget() {
    this->bIsFocusable = true;
    this->m_quest_objective_item = NULL;
    this->m_application_recruiment_item = NULL;
    this->m_battle_rule_policy_item = NULL;
}

void UVGCoopLobbyListWidget::QueryClose_Implementation() {
}

void UVGCoopLobbyListWidget::Open(const TArray<FVGCoopLobbyListItem>& CoopLobbyListItems) {
}

void UVGCoopLobbyListWidget::OnOpenCompleted() {
}

void UVGCoopLobbyListWidget::Close() {
}

