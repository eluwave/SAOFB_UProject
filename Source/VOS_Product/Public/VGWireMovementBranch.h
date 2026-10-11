#pragma once
#include "CoreMinimal.h"
#include "EVGWireState.h"
#include "VGWireMovementBranch.generated.h"

USTRUCT(BlueprintType)
struct FVGWireMovementBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWireState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 action_id;
    
    VOS_PRODUCT_API FVGWireMovementBranch();
};

