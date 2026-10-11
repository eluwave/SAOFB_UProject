#pragma once
#include "CoreMinimal.h"
#include "VGPlayerCardCoopData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCardCoopData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 battle_count;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 kill_count;
    
    FVGPlayerCardCoopData();
};

