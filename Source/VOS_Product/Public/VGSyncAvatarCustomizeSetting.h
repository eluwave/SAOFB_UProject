#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGSaveAvatarCustomizeSetting.h"
#include "VGSyncAvatarCustomizeSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSyncAvatarCustomizeSetting : public FVGSaveAvatarCustomizeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique override_voice_chara;
    
    FVGSyncAvatarCustomizeSetting();
};

