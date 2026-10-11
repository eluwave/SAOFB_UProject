#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGCharacterFigureSettingGeneratorConfigEntry.generated.h"

class UVGCharacterFigureSettingGeneratorConfig;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterFigureSettingGeneratorConfigEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference GeneratorConfigRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSettingGeneratorConfig* GeneratorConfig;
    
    FVGCharacterFigureSettingGeneratorConfigEntry();
};

