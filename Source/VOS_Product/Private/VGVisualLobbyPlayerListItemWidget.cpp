#include "VGVisualLobbyPlayerListItemWidget.h"

UVGVisualLobbyPlayerListItemWidget::UVGVisualLobbyPlayerListItemWidget() {
    this->m_scroll_panel = NULL;
    this->m_hero_icon_loader = NULL;
    this->m_is_my_team_member = true;
}

void UVGVisualLobbyPlayerListItemWidget::SetPlayerListItemInfo(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo, bool bIsOwn, bool is_my_team_member) {
}

UTexture2D* UVGVisualLobbyPlayerListItemWidget::GetHeroIcon(int32 index) {
    return NULL;
}

