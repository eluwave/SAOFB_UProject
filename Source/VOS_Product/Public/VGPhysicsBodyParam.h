#pragma once
#include "CoreMinimal.h"

#include "VGPhysicsBodyParam.generated.h"

USTRUCT(BlueprintType)
struct FVGPhysicsBodyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_body_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_inertia_scale;
    
    VOS_PRODUCT_API FVGPhysicsBodyParam();
};

