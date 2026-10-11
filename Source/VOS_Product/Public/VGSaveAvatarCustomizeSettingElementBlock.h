#pragma once
#include "CoreMinimal.h"
#include "VGSaveAvatarVisualCustomizeEntryBlock.h"
#include "VGSaveAvatarCustomizeSettingElementBlock.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveAvatarCustomizeSettingElementBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Category;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 part_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveAvatarVisualCustomizeEntryBlock Entry;
    
    VOS_PRODUCT_API FVGSaveAvatarCustomizeSettingElementBlock();
};

