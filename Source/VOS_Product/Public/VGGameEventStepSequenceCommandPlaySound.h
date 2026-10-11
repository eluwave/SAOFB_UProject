#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepSequenceSoundEntry.h"
#include "VGGameEventStepSequenceCommandPlaySound.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepSequenceCommandPlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepSequenceSoundEntry> entries;
    
    FVGGameEventStepSequenceCommandPlaySound();
};

