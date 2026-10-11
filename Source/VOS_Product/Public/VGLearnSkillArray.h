#pragma once
#include "CoreMinimal.h"
#include "VGLearnSkill.h"
#include "VGLearnSkillArray.generated.h"

USTRUCT(BlueprintType)
struct FVGLearnSkillArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLearnSkill> skills;
    
    VOS_PRODUCT_API FVGLearnSkillArray();
};

