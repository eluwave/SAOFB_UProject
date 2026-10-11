#pragma once
#include "CoreMinimal.h"
#include "VGArmed.h"
#include "VGAttachedArmed.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAttachedArmed : public AVGArmed {
    GENERATED_BODY()
public:
    AVGAttachedArmed(const FObjectInitializer& ObjectInitializer);

};

