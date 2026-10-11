#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandStartQuest.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandStartQuest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName quest_id;
    
    FVGGameEventStepCommandStartQuest();
};

