#pragma once
#include "CoreMinimal.h"
#include "EVGOptionSetting.h"
#include "EVGPlatformOptionItemType.h"
#include "EVGPlatformOptionSetting.h"
#include "VGPlatformOptionKeyAssignmentParam.h"
#include "VGPlatformOptionSliderParam.h"
#include "VGPlatformOptionSpinBoxParam.h"
#include "VGTextSymbol.h"
#include "VGSteamOptionItem.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSteamOptionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGOptionSetting option_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPlatformOptionSetting setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPlatformOptionItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol caption_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol helpmessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGPlatformOptionSpinBoxParam spin_box_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGPlatformOptionSliderParam slider_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGPlatformOptionKeyAssignmentParam key_assignment_param;
    
    FVGSteamOptionItem();
};

