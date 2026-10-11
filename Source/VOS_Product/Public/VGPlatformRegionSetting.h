#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlatformType.h"
#include "VGPlatformRegionParam.h"
#include "VGPlatformRegionSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGPlatformRegionSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PlatformType m_platform_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPlatformRegionParam> m_region_param;
    
    VOS_PRODUCT_API FVGPlatformRegionSetting();
};

