#pragma once
#include "CoreMinimal.h"
#include "VGSkillGuid.generated.h"

USTRUCT(BlueprintType)
struct FVGSkillGuid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_value;
    
public:
    VOS_PRODUCT_API FVGSkillGuid();
};

