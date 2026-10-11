#include "VGRoamGameMode.h"
#include "VGRoamPlayerState.h"

AVGRoamGameMode::AVGRoamGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStateClass = AVGRoamPlayerState::StaticClass();
    this->m_npc_manager = NULL;
    this->m_npc_data = NULL;
    this->m_pawn_class = NULL;
    this->m_behavior_tree = NULL;
    this->m_afasys_step_sequence_class = NULL;
    this->m_avatar_customize_component = NULL;
}

