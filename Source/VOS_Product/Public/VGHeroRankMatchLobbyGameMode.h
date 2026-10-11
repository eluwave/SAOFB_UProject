#pragma once
#include "CoreMinimal.h"
#include "VGLobbyGameMode.h"
#include "VGHeroRankMatchLobbyGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGHeroRankMatchLobbyGameMode : public AVGLobbyGameMode {
    GENERATED_BODY()
public:
    AVGHeroRankMatchLobbyGameMode(const FObjectInitializer& ObjectInitializer);

};

