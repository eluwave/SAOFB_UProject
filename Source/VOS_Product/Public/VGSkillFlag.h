#pragma once
#include "CoreMinimal.h"
#include "VGSkillFlag.generated.h"

USTRUCT(BlueprintType)
struct FVGSkillFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 flag_index;
    
    VOS_PRODUCT_API FVGSkillFlag();
};

