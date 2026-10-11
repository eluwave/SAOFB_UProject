#pragma once
#include "CoreMinimal.h"
#include "VGPhysicsAssetParam.generated.h"

class UVGPhysicsParamAsset;

USTRUCT(BlueprintType)
struct FVGPhysicsAssetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_physics_asset_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGPhysicsParamAsset* m_physics_param;
    
    VOS_PRODUCT_API FVGPhysicsAssetParam();
};

