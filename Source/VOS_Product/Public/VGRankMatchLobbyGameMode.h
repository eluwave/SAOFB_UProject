#pragma once
#include "CoreMinimal.h"
#include "VGLobbyGameMode.h"
#include "VGRankMatchLobbyGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGRankMatchLobbyGameMode : public AVGLobbyGameMode {
    GENERATED_BODY()
public:
    AVGRankMatchLobbyGameMode(const FObjectInitializer& ObjectInitializer);

};

