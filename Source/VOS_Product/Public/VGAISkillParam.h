#pragma once
#include "CoreMinimal.h"
#include "VGAISkillParam.generated.h"

class UVGSkillHeader;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAISkillParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGSkillHeader* skill_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 priority_offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float recast_offset;
    
    FVGAISkillParam();
};

