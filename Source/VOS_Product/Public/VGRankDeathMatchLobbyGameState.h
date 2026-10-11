#pragma once
#include "CoreMinimal.h"
#include "VGRankMatchLobbyGameState.h"
#include "VGRankDeathMatchLobbyGameState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRankDeathMatchLobbyGameState : public AVGRankMatchLobbyGameState {
    GENERATED_BODY()
public:
    AVGRankDeathMatchLobbyGameState(const FObjectInitializer& ObjectInitializer);

};

