#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "VGAxisMapping.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAxisMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DeviceInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey GameAxis;
    
    FVGAxisMapping();
};

