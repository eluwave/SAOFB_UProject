#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "VGPhysicsParamAssetUserData.generated.h"

class UVGPhysicsParamAsset;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPhysicsParamAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGPhysicsParamAsset* m_physics_param;
    
public:
    UVGPhysicsParamAssetUserData();

};

