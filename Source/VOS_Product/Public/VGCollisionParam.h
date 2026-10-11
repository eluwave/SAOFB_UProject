#pragma once
#include "CoreMinimal.h"
#include "VGCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FVGCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_bone_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_scaling_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_base_scale_ratio;
    
    VOS_PRODUCT_API FVGCollisionParam();
};

