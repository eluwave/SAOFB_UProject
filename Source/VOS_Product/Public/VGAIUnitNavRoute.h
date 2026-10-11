#pragma once
#include "CoreMinimal.h"

#include "VGAIUnitNavRoute.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIUnitNavRoute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nav_area_flag;
    
    FVGAIUnitNavRoute();
};

