#pragma once
#include "CoreMinimal.h"
#include "EVGRegionType.h"
#include "VGTextSymbol.h"
#include "VGPlatformRegionParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlatformRegionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_label_region_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGRegionType m_region_type;
    
    FVGPlatformRegionParam();
};

