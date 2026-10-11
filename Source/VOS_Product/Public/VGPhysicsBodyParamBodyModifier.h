#pragma once
#include "CoreMinimal.h"
#include "VGPhysicsBodyParamModifier.h"
#include "VGPhysicsBodyParamBodyModifier.generated.h"

USTRUCT(BlueprintType)
struct FVGPhysicsBodyParamBodyModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_body_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPhysicsBodyParamModifier> m_body_modifiers;
    
    VOS_PRODUCT_API FVGPhysicsBodyParamBodyModifier();
};

