#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyGameMode.h"
#include "VGHeroPlayerMatchLobbyGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGHeroPlayerMatchLobbyGameMode : public AVGVisualLobbyGameMode {
    GENERATED_BODY()
public:
    AVGHeroPlayerMatchLobbyGameMode(const FObjectInitializer& ObjectInitializer);

};

