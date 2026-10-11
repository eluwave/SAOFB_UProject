#pragma once
#include "CoreMinimal.h"
#include "EVGPadKey.h"
#include "EVGPlatformKeyOptionSetting.h"
#include "VGPlatformOptionKeyAssignmentParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlatformOptionKeyAssignmentParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPlatformKeyOptionSetting key_option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGPadKey::Type>> game_key;
    
    FVGPlatformOptionKeyAssignmentParam();
};

