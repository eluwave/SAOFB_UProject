#pragma once
#include "CoreMinimal.h"
#include "EVGCharacterFigureSettingAxisType.h"
#include "EVGCharacterFigureSettingTransformType.h"
#include "VGCharacterFigureSettingGeneratorConfigBoneElement.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterFigureSettingGeneratorConfigBoneElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharacterFigureSettingTransformType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharacterFigureSettingAxisType Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unpropagative;
    
    FVGCharacterFigureSettingGeneratorConfigBoneElement();
};

