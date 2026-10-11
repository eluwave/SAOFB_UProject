#include "VGGameEventViewerGameMode.h"
#include "GameFramework/Pawn.h"
#include "VGGameEventViewerGameState.h"
#include "VGHUD.h"

AVGGameEventViewerGameMode::AVGGameEventViewerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AVGGameEventViewerGameState::StaticClass();
    this->HUDClass = AVGHUD::StaticClass();
    this->DefaultPawnClass = APawn::StaticClass();
}

