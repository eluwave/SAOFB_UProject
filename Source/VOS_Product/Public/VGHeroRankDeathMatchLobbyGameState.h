#pragma once
#include "CoreMinimal.h"
#include "VGHeroRankMatchLobbyGameState.h"
#include "VGHeroRankDeathMatchLobbyGameState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGHeroRankDeathMatchLobbyGameState : public AVGHeroRankMatchLobbyGameState {
    GENERATED_BODY()
public:
    AVGHeroRankDeathMatchLobbyGameState(const FObjectInitializer& ObjectInitializer);

};

