#pragma once
#include "CoreMinimal.h"
#include "EVGCharacterFigureSettingGroup.h"
#include "VGCharacterFigureSettingGeneratorConfigBoneEntry.h"
#include "VGCharacterFigureSettingGeneratorConfigGroup.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterFigureSettingGeneratorConfigGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharacterFigureSettingGroup group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterFigureSettingGeneratorConfigBoneEntry> BoneEntries;
    
    FVGCharacterFigureSettingGeneratorConfigGroup();
};

