#pragma once
#include "CoreMinimal.h"

#include "VGHud3DEnemyStatusTextColorParam.generated.h"

USTRUCT(BlueprintType)
struct FVGHud3DEnemyStatusTextColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerLimit;
    
    VOS_PRODUCT_API FVGHud3DEnemyStatusTextColorParam();
};

