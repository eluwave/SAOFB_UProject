#pragma once
#include "CoreMinimal.h"
#include "VGBattlePlayerState.h"
#include "VGBattleSpecifiedPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleSpecifiedPlayerState : public AVGBattlePlayerState {
    GENERATED_BODY()
public:
    AVGBattleSpecifiedPlayerState(const FObjectInitializer& ObjectInitializer);

};

