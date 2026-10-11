#pragma once
#include "CoreMinimal.h"
#include "VGAfasysAction.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FVGAfasysAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 action_id;
    
    VOS_PRODUCT_API FVGAfasysAction();
};

