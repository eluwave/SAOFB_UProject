#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuSelectFunction.h"
#include "VGAfasysMenuSelectMessage.h"
#include "VGAfasysMenuFunctionSelectMessage.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysMenuFunctionSelectMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuSelectFunction::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuSelectMessage select;
    
    FVGAfasysMenuFunctionSelectMessage();
};

