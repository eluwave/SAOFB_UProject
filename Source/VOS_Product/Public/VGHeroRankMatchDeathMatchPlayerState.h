#pragma once
#include "CoreMinimal.h"
#include "VGHeroRankMatchPlayerState.h"
#include "VGHeroRankMatchDeathMatchPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGHeroRankMatchDeathMatchPlayerState : public AVGHeroRankMatchPlayerState {
    GENERATED_BODY()
public:
    AVGHeroRankMatchDeathMatchPlayerState(const FObjectInitializer& ObjectInitializer);

};

