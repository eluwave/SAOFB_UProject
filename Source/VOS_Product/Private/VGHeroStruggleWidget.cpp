#include "VGHeroStruggleWidget.h"

UVGHeroStruggleWidget::UVGHeroStruggleWidget() {
    this->bIsFocusable = true;
    this->k_selected_chara_max_num = 0;
    this->k_open_icon_delay_sec = 0.00f;
    this->k_random_change_interval_sec = 0.00f;
    this->m_character_role_icon = NULL;
    this->k_index_change_other_player_id = EVGWidgetSound::IndexChange;
    this->k_decide_other_player_id = EVGWidgetSound::IndexChange;
    this->k_cancel_other_player_id = EVGWidgetSound::IndexChange;
    this->m_preview_anim = NULL;
    this->m_friend_status = NULL;
    this->m_status_meter = NULL;
    this->m_friend_equip = NULL;
    this->m_wait_opponent_team_dialog = NULL;
    this->m_leave_room_confirm_dialog = NULL;
    this->m_quest_record = NULL;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
}

void UVGHeroStruggleWidget::SetReady(int32 PlayerId, int32 CursorIndex, bool IsReady) {
}

void UVGHeroStruggleWidget::SetPlayers_Spectator(const TArray<FVGHeroStrugglePlayerListItemInfo>& AlphaTeamInfo, const TArray<FVGHeroStrugglePlayerListItemInfo>& BravoTeamInfo) {
}

void UVGHeroStruggleWidget::SetPlayers(const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo) {
}

void UVGHeroStruggleWidget::SetCursorIndex(int32 PlayerId, int32 index) {
}

void UVGHeroStruggleWidget::QueryClose_Implementation() {
}

void UVGHeroStruggleWidget::OpenRoam() {
}

void UVGHeroStruggleWidget::Open() {
}

void UVGHeroStruggleWidget::DelaiedOpenIcons_VisualLobby() {
}

void UVGHeroStruggleWidget::DelaiedOpenIcons() {
}

void UVGHeroStruggleWidget::Close() {
}

