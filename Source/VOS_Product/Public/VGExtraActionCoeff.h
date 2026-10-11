#pragma once
#include "CoreMinimal.h"
#include "VGExtraActionCoeff.generated.h"

USTRUCT(BlueprintType)
struct FVGExtraActionCoeff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float attack_coeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed_coeff;
    
    VOS_PRODUCT_API FVGExtraActionCoeff();
};

