#pragma once
#include "CoreMinimal.h"
#include "VGCharacterFigureSettingGeneratorConfigBoneElement.h"
#include "VGCharacterFigureSettingGeneratorConfigBoneEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterFigureSettingGeneratorConfigBoneEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterFigureSettingGeneratorConfigBoneElement> Elements;
    
    FVGCharacterFigureSettingGeneratorConfigBoneEntry();
};

