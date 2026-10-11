#pragma once
#include "CoreMinimal.h"
#include "EVGLock.h"
#include "VGDamageReactionData.h"
#include "VGDamageReactionLock.generated.h"

USTRUCT(BlueprintType)
struct FVGDamageReactionLock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGLock Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDamageReactionData reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float camera_distance;
    
    VOS_PRODUCT_API FVGDamageReactionLock();
};

