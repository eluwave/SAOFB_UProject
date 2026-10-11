#pragma once
#include "CoreMinimal.h"
#include "VGMainMenuTabItem.generated.h"

class UTexture2D;
class UVGMainMenuListSetting;

USTRUCT(BlueprintType)
struct FVGMainMenuTabItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMainMenuListSetting* List;
    
    VOS_PRODUCT_API FVGMainMenuTabItem();
};

