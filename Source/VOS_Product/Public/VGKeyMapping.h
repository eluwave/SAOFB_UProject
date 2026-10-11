#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EVGPadKey.h"
#include "VGKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DeviceInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGPadKey::Type>> GameKey;
    
    FVGKeyMapping();
};

