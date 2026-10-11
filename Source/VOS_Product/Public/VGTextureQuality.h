#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGTextureQuality.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGTextureQuality : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mip_bias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max_anisotropy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool limit_pool_size_to_vram;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pool_size;
    
    FVGTextureQuality();
};

