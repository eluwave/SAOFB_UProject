#pragma once
#include "CoreMinimal.h"
#include "VGGameEventSearchableLocator.h"
#include "VGGameEventStepSequenceLocator.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventStepSequenceLocator : public AVGGameEventSearchableLocator {
    GENERATED_BODY()
public:
    AVGGameEventStepSequenceLocator(const FObjectInitializer& ObjectInitializer);

};

