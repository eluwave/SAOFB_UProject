#pragma once
#include "CoreMinimal.h"
#include "VGBattleGameState.h"
#include "VGShowBattleGameState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGShowBattleGameState : public AVGBattleGameState {
    GENERATED_BODY()
public:
    AVGShowBattleGameState(const FObjectInitializer& ObjectInitializer);

};

