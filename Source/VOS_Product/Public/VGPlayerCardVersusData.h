#pragma once
#include "CoreMinimal.h"
#include "VGPlayerCardVersusData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCardVersusData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 battle_count;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 grade;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 rank;
    
    FVGPlayerCardVersusData();
};

