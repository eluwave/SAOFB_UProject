#pragma once
#include "CoreMinimal.h"
#include "VGGameEventLocator.h"
#include "VGGameEventSearchableLocator.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventSearchableLocator : public AVGGameEventLocator {
    GENERATED_BODY()
public:
    AVGGameEventSearchableLocator(const FObjectInitializer& ObjectInitializer);

};

