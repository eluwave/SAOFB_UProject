#pragma once
#include "CoreMinimal.h"
#include "VGSaveAvatarCustomizeSettingItemBlock.h"
#include "VGSaveAvatarCostumeBlock.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveAvatarCostumeBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveAvatarCustomizeSettingItemBlock> Items;
    
    VOS_PRODUCT_API FVGSaveAvatarCostumeBlock();
};

