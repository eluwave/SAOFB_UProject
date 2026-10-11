#pragma once
#include "CoreMinimal.h"
#include "VGPlayerCardTimeData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCardTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 year;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 month;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 day;
    
    FVGPlayerCardTimeData();
};

