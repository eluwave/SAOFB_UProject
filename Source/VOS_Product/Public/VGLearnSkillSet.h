#pragma once
#include "CoreMinimal.h"
#include "EVGSkillType.h"
#include "VGLearnSkillArray.h"
#include "VGLearnSkillSet.generated.h"

USTRUCT(BlueprintType)
struct FVGLearnSkillSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLearnSkillArray> Slots;
    
    VOS_PRODUCT_API FVGLearnSkillSet();
};

