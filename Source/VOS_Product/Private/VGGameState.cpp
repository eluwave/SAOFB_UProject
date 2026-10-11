#include "VGGameState.h"
#include "Net/UnrealNetwork.h"
#include "VGMeshMaterialOverrideManagerTicker.h"

AVGGameState::AVGGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_game_type = EVGGameType::None;
    this->m_is_enable_invite_travel = false;
    this->m_is_auto_fade_disabled = false;
    this->m_is_enable_fps_check = false;
    this->m_is_fps_check_num = 0;
    this->m_is_fps_check_interval = 0.00f;
    this->m_has_game_started = false;
    this->m_character_manager = NULL;
    this->m_event_supervisor = NULL;
    this->m_drop_item_param_info = NULL;
    this->m_level_sequence_actor = NULL;
    this->m_sys_dialog = NULL;
    this->m_mmo_ticker = CreateDefaultSubobject<UVGMeshMaterialOverrideManagerTicker>(TEXT("MaterialOverrideManagerTicker"));
}

void AVGGameState::NetMulticast_OnGameHasStarted_Implementation() {
}

bool AVGGameState::HasGameStarted() const {
    return false;
}

EVGGameType AVGGameState::GetGameType() const {
    return EVGGameType::Menu;
}

void AVGGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGGameState, m_has_game_started);
    DOREPLIFETIME(AVGGameState, m_situation_name);
    DOREPLIFETIME(AVGGameState, m_exclusive_sublevel_names);
}

