#pragma once
#include "CoreMinimal.h"
#include "VGAvatarItemId.h"
#include "VGMeshMaterialOverride.h"
#include "VGAvatarCustomizeSettingItem.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAvatarCustomizeSettingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAvatarItemId item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMeshMaterialOverride material_override;
    
    FVGAvatarCustomizeSettingItem();
};

