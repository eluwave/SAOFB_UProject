#pragma once
#include "CoreMinimal.h"
#include "VGCharacterStatusCustomizeSlotEntry.h"
#include "VGCharacterStatusCustomizeSlot.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterStatusCustomizeSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGCharacterStatusCustomizeSlotEntry entries[2];
    
    FVGCharacterStatusCustomizeSlot();
};

