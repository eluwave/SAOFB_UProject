#pragma once
#include "CoreMinimal.h"
#include "VGScreenFadeParam.h"
#include "VGGameEventStepCommandScreenFade.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandScreenFade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGScreenFadeParam fade_param;
    
    FVGGameEventStepCommandScreenFade();
};

