#include "VGAIPlayerTeam.h"
#include "EVGTeamCategory.h"
#include "EVGTeamPathFindingGroup.h"
#include "Net/UnrealNetwork.h"

AVGAIPlayerTeam::AVGAIPlayerTeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->m_team_category = EVGTeamCategory::PLAYER_VS_PLAYER;
    this->m_pathfinding_group = EVGTeamPathFindingGroup::Always;
    this->m_team_command_table.AddDefaulted(11);
    this->m_leader_actor = NULL;
}

void AVGAIPlayerTeam::WarpToLeader(bool only_unreachable) {
}

void AVGAIPlayerTeam::Activate_Implementation(bool tickActivate) {
}

void AVGAIPlayerTeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGAIPlayerTeam, m_replicated_data);
}

