#include "VGCoopVisualLobbyGameMode.h"

AVGCoopVisualLobbyGameMode::AVGCoopVisualLobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pawn_class = NULL;
    this->m_behavior_tree = NULL;
}

void AVGCoopVisualLobbyGameMode::onNavigationGenerationFinished(ANavigationData* NavData) {
}

