#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGPhysicsBodyParamBodyModifier.h"
#include "VGPhysicsBodyParamDemoModifier.generated.h"

USTRUCT(BlueprintType)
struct FVGPhysicsBodyParamDemoModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_demo_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_character_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_character_indices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPhysicsBodyParamBodyModifier> m_modifiers;
    
    VOS_PRODUCT_API FVGPhysicsBodyParamDemoModifier();
};

