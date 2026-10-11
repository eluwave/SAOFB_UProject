#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventStepCommandAnimationPlayType.h"
#include "VGGameEventCharacterAnimParam.h"
#include "VGGameEventStepCommandFacialExpressionEntry.h"
#include "VGGameEventStepCommandAnimationEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandAnimationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameEventStepCommandAnimationPlayType play_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventCharacterAnimParam param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName emotion_overwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventStepCommandFacialExpressionEntry facial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString lip_id;
    
    FVGGameEventStepCommandAnimationEntry();
};

