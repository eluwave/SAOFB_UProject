#include "VGGameMode.h"
#include "VGGameState.h"
#include "VGPlayerController.h"
#include "VGPlayerState.h"

AVGGameMode::AVGGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AVGGameState::StaticClass();
    this->PlayerControllerClass = AVGPlayerController::StaticClass();
    this->PlayerStateClass = AVGPlayerState::StaticClass();
    this->bDelayedStart = true;
}

void AVGGameMode::RequestToTransit(const FVGTransitionRequest& Request) {
}

