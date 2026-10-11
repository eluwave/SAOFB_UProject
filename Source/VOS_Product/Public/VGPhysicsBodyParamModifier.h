#pragma once
#include "CoreMinimal.h"
#include "EVGPhysicsBodyParam.h"
#include "VGPhysicsBodyParamModifier.generated.h"

USTRUCT(BlueprintType)
struct FVGPhysicsBodyParamModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPhysicsBodyParam m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_value;
    
    VOS_PRODUCT_API FVGPhysicsBodyParamModifier();
};

