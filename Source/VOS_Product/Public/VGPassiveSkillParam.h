#pragma once
#include "CoreMinimal.h"
#include "EVGPassiveSkill.h"
#include "VGPassiveSkillParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPassiveSkillParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPassiveSkill Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    FVGPassiveSkillParam();
};

