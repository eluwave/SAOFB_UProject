#include "VGGameEventEnemySpawnEvent.h"

UVGGameEventEnemySpawnEvent::UVGGameEventEnemySpawnEvent() {
    this->m_spawned_enemy_team = NULL;
}

void UVGGameEventEnemySpawnEvent::Terminate() {
}

void UVGGameEventEnemySpawnEvent::OnTeamExterminated(AVGAITeam* Team) {
}

AVGAITeam* UVGGameEventEnemySpawnEvent::GetOwnTeam() {
    return NULL;
}

