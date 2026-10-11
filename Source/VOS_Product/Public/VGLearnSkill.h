#pragma once
#include "CoreMinimal.h"
#include "VGLearnSkill.generated.h"

USTRUCT(BlueprintType)
struct FVGLearnSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 skill_id;
    
    VOS_PRODUCT_API FVGLearnSkill();
};

