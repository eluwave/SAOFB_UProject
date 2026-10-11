#pragma once
#include "CoreMinimal.h"
#include "VGCharacterHitTolerance.generated.h"

USTRUCT(BlueprintType)
struct FVGCharacterHitTolerance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float physics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float optics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float melee;
    
    VOS_PRODUCT_API FVGCharacterHitTolerance();
};

