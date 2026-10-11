#pragma once
#include "CoreMinimal.h"
#include "VGBattleGameState.h"
#include "VGBattleDefenceGameState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleDefenceGameState : public AVGBattleGameState {
    GENERATED_BODY()
public:
    AVGBattleDefenceGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStarted() const;
    
};

