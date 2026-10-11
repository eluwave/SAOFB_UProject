#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyGameMode.h"
#include "VGPlayerMatchVisualLobbyGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGPlayerMatchVisualLobbyGameMode : public AVGVisualLobbyGameMode {
    GENERATED_BODY()
public:
    AVGPlayerMatchVisualLobbyGameMode(const FObjectInitializer& ObjectInitializer);

};

