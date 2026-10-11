#pragma once
#include "CoreMinimal.h"
#include "EVGPhysicsParam.h"
#include "VGPhysicsParamModifier.generated.h"

USTRUCT(BlueprintType)
struct FVGPhysicsParamModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPhysicsParam m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_value;
    
    VOS_PRODUCT_API FVGPhysicsParamModifier();
};

