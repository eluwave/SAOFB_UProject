#pragma once
#include "CoreMinimal.h"
#include "VGAvatarCustomizeSettingItem.h"
#include "VGSaveAvatarCustomizeSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveAvatarCustomizeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarCustomizeSettingItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> is_accessory_hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName skin_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName face_paint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 voice_type;
    
    FVGSaveAvatarCustomizeSetting();
};

