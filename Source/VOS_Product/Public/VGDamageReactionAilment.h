#pragma once
#include "CoreMinimal.h"
#include "EVGStatusAilment.h"
#include "VGDamageReactionData.h"
#include "VGDamageReactionAilment.generated.h"

USTRUCT(BlueprintType)
struct FVGDamageReactionAilment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusAilment Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDamageReactionData reaction;
    
    VOS_PRODUCT_API FVGDamageReactionAilment();
};

