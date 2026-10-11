#include "VGLobbyGameState.h"
#include "VGDetectLossConnectionComponent.h"

AVGLobbyGameState::AVGLobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_detect_loss_component = CreateDefaultSubobject<UVGDetectLossConnectionComponent>(TEXT("DetectLossConnectionComponent"));
}

void AVGLobbyGameState::Server_SetFreeInputText_Implementation(const FString& Name, const FString& String, const FString& unique_id) {
}
bool AVGLobbyGameState::Server_SetFreeInputText_Validate(const FString& Name, const FString& String, const FString& unique_id) {
    return true;
}

