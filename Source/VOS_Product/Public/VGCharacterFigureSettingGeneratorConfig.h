#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGCharacterFigureSettingGeneratorConfigGroup.h"
#include "VGCharacterFigureSettingGeneratorConfig.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCharacterFigureSettingGeneratorConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterFigureSettingGeneratorConfigGroup> Groups;
    
    UVGCharacterFigureSettingGeneratorConfig();

};

