#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGBreastSwingAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBreastSwingAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> m_npc_size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> m_body_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> m_region_scale;
    
    UVGBreastSwingAsset();

};

