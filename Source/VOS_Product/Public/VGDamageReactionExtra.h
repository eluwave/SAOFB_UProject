#pragma once
#include "CoreMinimal.h"
#include "EVGDamageReactionExtra.h"
#include "VGDamageReactionData.h"
#include "VGDamageReactionExtra.generated.h"

USTRUCT(BlueprintType)
struct FVGDamageReactionExtra {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDamageReactionExtra Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float decrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> motion_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDamageReactionData reaction;
    
    VOS_PRODUCT_API FVGDamageReactionExtra();
};

