#pragma once
#include "CoreMinimal.h"
#include "EVGPassiveSkill.h"
#include "VGPlayerCardPassiveSkill.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCardPassiveSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPassiveSkill ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    FVGPlayerCardPassiveSkill();
};

