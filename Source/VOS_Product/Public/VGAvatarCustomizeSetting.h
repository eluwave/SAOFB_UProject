#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EVGCharaUnique.h"
#include "VGAvatarCustomizeSettingItem.h"
#include "VGAvatarCustomizeSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAvatarCustomizeSetting : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarCustomizeSettingItem> m_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_is_accessory_hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_skin_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_face_paint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_voice_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_override_voice_chara;
    
public:
    UVGAvatarCustomizeSetting();

};

