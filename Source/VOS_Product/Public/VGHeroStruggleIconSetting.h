#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGCharaUnique.h"
#include "EVGHeroStruggleIconType.h"
#include "VGHeroStruggleCharaIconMoveInfo.h"
#include "VGHeroStruggleIconSetting.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGHeroStruggleIconSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique chara_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 customize_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chara_icon_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleCharaIconMoveInfo move_cursor_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHeroStruggleIconType icon_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* chara_icon_image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* selected_chara_image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool has_check_additional_content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_usable_trial_rom;
    
    VOS_PRODUCT_API FVGHeroStruggleIconSetting();
};

