#pragma once
#include "CoreMinimal.h"
#include "EVGWireTargetType.h"
#include "VGWireHitBranch.generated.h"

USTRUCT(BlueprintType)
struct FVGWireHitBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWireTargetType hit_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 action_id;
    
    VOS_PRODUCT_API FVGWireHitBranch();
};

