#pragma once
#include "CoreMinimal.h"
#include "EVGAchievement.h"
#include "VGGameEventStepCommandUnlockAchievement.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandUnlockAchievement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGAchievement> achievements;
    
    FVGGameEventStepCommandUnlockAchievement();
};

