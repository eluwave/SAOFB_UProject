#include "VGBattleGameState.h"
#include "Net/UnrealNetwork.h"

AVGBattleGameState::AVGBattleGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_scorestreak = NULL;
    this->m_prize_collection = NULL;
    this->m_coop_announce = NULL;
    this->m_coop_result = NULL;
    this->m_versus_announce = NULL;
    this->m_versus_result = NULL;
    this->m_tdm_announce = NULL;
    this->m_tdm_result = NULL;
    this->m_ffa_announce = NULL;
    this->m_ffa_result = NULL;
    this->m_br_announce = NULL;
    this->m_br_result = NULL;
    this->m_defence_announce = NULL;
    this->m_battle_sequencer = NULL;
    this->m_ai_team_manager = NULL;
    this->m_ai_team_manager_util = NULL;
    this->m_drop_item_manager = NULL;
    this->m_battle_talk_manager = NULL;
    this->m_skill_asset_pool = NULL;
    this->m_dungeon = NULL;
    this->m_detect_loss_component = NULL;
    this->m_summonenergy = NULL;
    this->m_is_chara_ready = false;
}

UVGAITeamManagerUtility* AVGBattleGameState::GetTeamManagerUtility() {
    return NULL;
}

AVGAITeamManager* AVGBattleGameState::GetTeamManager() {
    return NULL;
}

AVGDungeon* AVGBattleGameState::GetDungeon() {
    return NULL;
}

AVGDropItemManager* AVGBattleGameState::GetDropItemManager() {
    return NULL;
}

TArray<ADonNavigationManager*> AVGBattleGameState::GetDoNNavigationManagers() {
    return TArray<ADonNavigationManager*>();
}

UVGBattleTalkManager* AVGBattleGameState::GetBattleTalkManager() {
    return NULL;
}

void AVGBattleGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattleGameState, m_is_chara_ready);
}

