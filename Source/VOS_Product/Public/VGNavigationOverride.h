#pragma once
#include "CoreMinimal.h"
#include "EVGPadKey.h"
#include "VGNavigationOverride.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGNavigationOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGPadKey::Type> Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 value;
    
    FVGNavigationOverride();
};

