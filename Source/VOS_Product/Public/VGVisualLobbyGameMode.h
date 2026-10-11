#pragma once
#include "CoreMinimal.h"
#include "VGLobbyGameMode.h"
#include "VGVisualLobbyGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGVisualLobbyGameMode : public AVGLobbyGameMode {
    GENERATED_BODY()
public:
    AVGVisualLobbyGameMode(const FObjectInitializer& ObjectInitializer);

};

