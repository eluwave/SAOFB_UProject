#pragma once
#include "CoreMinimal.h"
#include "VGAimAccuracyAction.generated.h"

USTRUCT(BlueprintType)
struct FVGAimAccuracyAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 action_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MIL;
    
    VOS_PRODUCT_API FVGAimAccuracyAction();
};

