#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuFunction.h"
#include "VGAfasysMenuSelectMessage.h"
#include "VGAfasysMenuFundManagementModeSelectMessage.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysMenuFundManagementModeSelectMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuFunction::Type> mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuSelectMessage select;
    
    FVGAfasysMenuFundManagementModeSelectMessage();
};

