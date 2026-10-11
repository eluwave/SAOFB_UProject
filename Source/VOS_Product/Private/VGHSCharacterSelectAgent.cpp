#include "VGHSCharacterSelectAgent.h"

AVGHSCharacterSelectAgent::AVGHSCharacterSelectAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_hero_struggle_icon_setting_table = NULL;
    this->m_hero_struggle_weapon_setting_table = NULL;
    this->m_battle_royal_hero_struggle_weapon_setting_table = NULL;
    this->m_hero_struggle_skill_setting_table = NULL;
    this->m_battle_royal_hero_struggle_skill_setting_table = NULL;
    this->m_hero_struggle_status_setting_table = NULL;
    this->m_battle_royal_hero_struggle_status_setting_table = NULL;
    this->m_hero_mission_weapon_setting_table = NULL;
    this->m_hero_mission_skill_setting_table = NULL;
    this->m_hero_mission_status_setting_table = NULL;
    this->m_hero_select_widget_class = NULL;
    this->m_hero_select_widget = NULL;
    this->m_calc_component_class = NULL;
    this->m_calc_component = NULL;
    this->m_passive_skill_component = NULL;
    this->m_quest_record = NULL;
}

void AVGHSCharacterSelectAgent::StartVisualLobby(EVGHeroStruggleSettingType Type, int32 OwnPlayerId, const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo) {
}

void AVGHSCharacterSelectAgent::StartSpectator(int32 OwnPlayerId, const TArray<FVGHeroStrugglePlayerListItemInfo>& AlphaTeamInfo, const TArray<FVGHeroStrugglePlayerListItemInfo>& BravoTeamInfo) {
}

void AVGHSCharacterSelectAgent::StartHeroMission(EVGHeroStruggleSettingType Type, int32 OwnPlayerId, const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo, const TArray<EVGHeroSelectableCharacter>& hero_selectable_info) {
}

void AVGHSCharacterSelectAgent::Start(EVGHeroStruggleSettingType Type, int32 OwnPlayerId, const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo) {
}

void AVGHSCharacterSelectAgent::SetReady(int32 PlayerId, int32 CursorIndex, bool IsReady) {
}

void AVGHSCharacterSelectAgent::SetPlayerSelectedCursor(int32 PlayerId, int32 SelectedIndex) {
}

void AVGHSCharacterSelectAgent::SetPlayers_Spectator(const TArray<FVGHeroStrugglePlayerListItemInfo>& AlphaTeamInfo, const TArray<FVGHeroStrugglePlayerListItemInfo>& BravoTeamInfo) {
}

void AVGHSCharacterSelectAgent::SetPlayers(const TArray<FVGHeroStrugglePlayerListItemInfo>& PlayersItemInfo) {
}

void AVGHSCharacterSelectAgent::GetPlayersSelectedInfo(TArray<FVGHeroStruggleSetting>& outPlayersSelectedInfo) {
}

void AVGHSCharacterSelectAgent::ForceTerminate(int32 OwnPlayerId) {
}

void AVGHSCharacterSelectAgent::Close() {
}

