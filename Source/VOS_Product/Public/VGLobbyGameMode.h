#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGLobbyGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGLobbyGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    AVGLobbyGameMode(const FObjectInitializer& ObjectInitializer);

};

