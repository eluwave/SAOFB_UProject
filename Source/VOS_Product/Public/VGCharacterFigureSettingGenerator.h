#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGCharacterFigureSettingGeneratorConfigEntry.h"
#include "VGCharacterFigureSettingGenerator.generated.h"

class UVGBreastSwingAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGCharacterFigureSettingGenerator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_skeleton_ref;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_male_configs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_female_configs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_default_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterFigureSettingGeneratorConfigEntry> m_configs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_npc_breast_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGBreastSwingAsset* m_npc_breast_param;
    
public:
    UVGCharacterFigureSettingGenerator();

};

