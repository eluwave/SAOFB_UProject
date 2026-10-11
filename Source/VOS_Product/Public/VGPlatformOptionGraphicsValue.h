#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "EVGGraphicsQualityLevel.h"
#include "VGTextSymbol.h"
#include "VGPlatformOptionGraphicsValue.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlatformOptionGraphicsValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGraphicsQualityLevel Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWindowMode::Type> window_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol param_texts;
    
    FVGPlatformOptionGraphicsValue();
};

