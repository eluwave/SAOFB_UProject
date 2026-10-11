#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGMainMenuTabItem.h"
#include "VGMainMenuTabSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMainMenuTabSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMainMenuTabItem> TabItem;
    
    UVGMainMenuTabSetting();

};

