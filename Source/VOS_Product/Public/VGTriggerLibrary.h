#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGTriggerAssetSet.h"
#include "VGTriggerLibrary.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTriggerLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTriggerAssetSet> triggers;
    
    UVGTriggerLibrary();

};

