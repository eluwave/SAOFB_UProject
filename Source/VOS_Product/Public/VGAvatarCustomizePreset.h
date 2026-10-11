#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Engine/DataTable.h"
#include "EVGCharaGender.h"
#include "EVGCharaUnique.h"
#include "VGAvatarCustomizePreset.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAvatarCustomizePreset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique chara_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference customize_settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 figure_config_index;
    
    FVGAvatarCustomizePreset();
};

