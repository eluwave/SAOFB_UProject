#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Engine/DataTable.h"
#include "EVGCharaGender.h"
#include "VGTextSymbol.h"
#include "VGAvatarCustomizeVoiceEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAvatarCustomizeVoiceEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference cue_sheet;
    
    FVGAvatarCustomizeVoiceEntry();
};

