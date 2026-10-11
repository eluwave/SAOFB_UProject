#pragma once
#include "CoreMinimal.h"

#include "VGItemRarityColor.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemRarityColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FVGItemRarityColor();
};

