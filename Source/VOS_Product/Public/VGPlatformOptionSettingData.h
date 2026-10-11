#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGGameplayData.h"
#include "VGPlatformOptionSettingData.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGPlatformOptionSettingData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_quality_assets;
    
public:
    UVGPlatformOptionSettingData();

};

