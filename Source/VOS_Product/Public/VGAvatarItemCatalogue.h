#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGAvatarItemCatalogue.generated.h"

class UVGAvatarItemDataAsset;
class UVGAvatarVoiceDataAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGAvatarItemCatalogue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGAvatarItemDataAsset*> m_item_assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGAvatarVoiceDataAsset*> m_voice_assets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_unique_chara_voice_cue_sheet_path;
    
public:
    UVGAvatarItemCatalogue();

};

