#pragma once
#include "CoreMinimal.h"
#include "EVGSkillType.h"
#include "VGAISkill.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAISkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillType Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    FVGAISkill();
};

