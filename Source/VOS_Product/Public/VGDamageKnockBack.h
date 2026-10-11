#pragma once
#include "CoreMinimal.h"

#include "EVGKnockBackFactor.h"
#include "EVGKnockBackRotation.h"
#include "VGDamageKnockBack.generated.h"

USTRUCT(BlueprintType)
struct FVGDamageKnockBack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGKnockBackFactor factor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGKnockBackRotation Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    VOS_PRODUCT_API FVGDamageKnockBack();
};

