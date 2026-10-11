#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGPhysicsBodyParam.h"
#include "VGPhysicsBodyParamDemoModifier.h"
#include "VGPhysicsParam.h"
#include "VGPhysicsParamAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGPhysicsParamAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPhysicsBodyParam> m_body_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPhysicsBodyParamDemoModifier> m_body_modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPhysicsParam> m_params;
    
public:
    UVGPhysicsParamAsset();

};

