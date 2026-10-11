#pragma once
#include "CoreMinimal.h"
#include "EVGStatusAilment.h"
#include "VGStatusAilment.generated.h"

USTRUCT(BlueprintType)
struct FVGStatusAilment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusAilment Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    VOS_PRODUCT_API FVGStatusAilment();
};

