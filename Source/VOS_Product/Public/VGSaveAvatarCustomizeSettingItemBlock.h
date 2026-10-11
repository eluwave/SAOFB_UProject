#pragma once
#include "CoreMinimal.h"
#include "VGSaveAvatarCustomizeSettingElementBlock.h"
#include "VGSaveAvatarItemIdBlock.h"
#include "VGSaveAvatarCustomizeSettingItemBlock.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveAvatarCustomizeSettingItemBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveAvatarItemIdBlock item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveAvatarCustomizeSettingElementBlock> color_elements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveAvatarCustomizeSettingElementBlock> texture_elements;
    
    VOS_PRODUCT_API FVGSaveAvatarCustomizeSettingItemBlock();
};

