#pragma once
#include "CoreMinimal.h"
#include "VGCollisionParam.h"
#include "VGCollisionAssetParam.generated.h"

USTRUCT(BlueprintType)
struct FVGCollisionAssetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_physics_asset_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCollisionParam> m_collision_param;
    
    VOS_PRODUCT_API FVGCollisionAssetParam();
};

