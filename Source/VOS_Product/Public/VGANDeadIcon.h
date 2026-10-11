#pragma once
#include "CoreMinimal.h"
#include "EVGDeadIconType.h"
#include "VGAnimNotify.h"
#include "VGANDeadIcon.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANDeadIcon : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_auto_icon_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDeadIconType icon_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_visible;
    
    UVGANDeadIcon();

};

