#pragma once
#include "CoreMinimal.h"
#include "VGGameState.h"
#include "VGTitleGameState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGTitleGameState : public AVGGameState {
    GENERATED_BODY()
public:
    AVGTitleGameState(const FObjectInitializer& ObjectInitializer);

};

