#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGGameEventStepSequenceCharacterEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepSequenceCharacterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique Character;
    
    FVGGameEventStepSequenceCharacterEntry();
};

