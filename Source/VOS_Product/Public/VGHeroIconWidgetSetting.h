#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Engine/DataTable.h"
#include "VGHeroIconWidgetSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroIconWidgetSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference chara_icon_image_ref;
    
    VOS_PRODUCT_API FVGHeroIconWidgetSetting();
};

