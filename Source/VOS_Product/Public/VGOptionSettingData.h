#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGGameplayData.h"
#include "VGOptionSettingData.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGOptionSettingData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_pad_input_asset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_kbd_input_asset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_message_speed_coeff;
    
public:
    UVGOptionSettingData();

};

