#pragma once
#include "CoreMinimal.h"
#include "VGRankMatchPlayerState.h"
#include "VGRankMatchDeathMatchPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRankMatchDeathMatchPlayerState : public AVGRankMatchPlayerState {
    GENERATED_BODY()
public:
    AVGRankMatchDeathMatchPlayerState(const FObjectInitializer& ObjectInitializer);

};

