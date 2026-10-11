#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandPlayLevelSequence.generated.h"

class ULevelSequence;
class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandPlayLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString demo_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bgm_fade_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool suppress_end_fade;
    
    FVGGameEventStepCommandPlayLevelSequence();
};

