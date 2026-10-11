#pragma once
#include "CoreMinimal.h"
#include "EVGDamageImpact.h"
#include "VGDamageReactionData.h"
#include "VGDamageReactionImpact.generated.h"

USTRUCT(BlueprintType)
struct FVGDamageReactionImpact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDamageImpact impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDamageReactionData reaction;
    
    VOS_PRODUCT_API FVGDamageReactionImpact();
};

