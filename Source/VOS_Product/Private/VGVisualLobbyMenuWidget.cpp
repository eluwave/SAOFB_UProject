#include "VGVisualLobbyMenuWidget.h"

UVGVisualLobbyMenuWidget::UVGVisualLobbyMenuWidget() {
    this->m_menu_mode = EVGVisualLobbyMenuMode::ActionList;
    this->m_customize_slot_agent_class = NULL;
    this->m_team_set_agent_class = NULL;
    this->m_friend_list_agent_class = NULL;
    this->m_friend_list_agent = NULL;
    this->m_blur_effect_ui_class = NULL;
    this->m_menu_state_flag = 0;
    this->m_player_id = 0;
    this->m_max_slot_num = 4;
    this->k_is_need_chat = false;
    this->m_is_hide_second_list = false;
    this->m_dialog = NULL;
    this->m_action_list = NULL;
    this->m_first_list_widget = NULL;
    this->m_second_list_widget = NULL;
    this->m_first_list = NULL;
    this->m_second_list = NULL;
    this->m_customize_slot_agent = NULL;
    this->m_team_set_agent = NULL;
    this->m_member_list_window = NULL;
    this->m_hero_icon_loader = NULL;
    this->m_is_display_hero_icon = false;
}

void UVGVisualLobbyMenuWidget::UpdateButtonEnableStates(bool ApplyImmediately) {
}

void UVGVisualLobbyMenuWidget::UnsetQuestText() {
}

void UVGVisualLobbyMenuWidget::ToggleMemberList() {
}

void UVGVisualLobbyMenuWidget::SetQuestText(const FText& QuestName) {
}

void UVGVisualLobbyMenuWidget::SetQuestID(const FName& QuestID) {
}

void UVGVisualLobbyMenuWidget::SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries) {
}

void UVGVisualLobbyMenuWidget::SetOwnerPlayerId(int32 PlayerId) {
}

void UVGVisualLobbyMenuWidget::SetCloseButton(EVGPadKey::Type btn) {
}

void UVGVisualLobbyMenuWidget::RemovePlayers() {
}

void UVGVisualLobbyMenuWidget::Open() {
}

void UVGVisualLobbyMenuWidget::NotifySyncPhase(bool Start) {
}

void UVGVisualLobbyMenuWidget::NotifyCountdown(bool Start) {
}

bool UVGVisualLobbyMenuWidget::IsWaitSync() const {
    return false;
}

bool UVGVisualLobbyMenuWidget::IsReadyButtonActive() const {
    return false;
}

bool UVGVisualLobbyMenuWidget::IsHiddenSecondListMode() const {
    return false;
}

void UVGVisualLobbyMenuWidget::Init(EVGVisualLobbyNetMode NetMode) {
}

bool UVGVisualLobbyMenuWidget::GetReadyStatus() const {
    return false;
}

bool UVGVisualLobbyMenuWidget::GetMenuOpenStatus() const {
    return false;
}

FVGVisualLobbyActionListEntry UVGVisualLobbyMenuWidget::GetActionListEntry(EVGVisualLobbyActionItemType ActionItemType) const {
    return FVGVisualLobbyActionListEntry{};
}

void UVGVisualLobbyMenuWidget::Close() {
}

void UVGVisualLobbyMenuWidget::ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerIndex) {
}

