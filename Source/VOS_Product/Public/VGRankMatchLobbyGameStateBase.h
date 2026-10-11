#pragma once
#include "CoreMinimal.h"
#include "VGLobbyGameState.h"
#include "VGRankMatchLobbyGameStateBase.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRankMatchLobbyGameStateBase : public AVGLobbyGameState {
    GENERATED_BODY()
public:
    AVGRankMatchLobbyGameStateBase(const FObjectInitializer& ObjectInitializer);

};

