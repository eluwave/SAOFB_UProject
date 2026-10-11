#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGOverrideItemDropAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGOverrideItemDropAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> OverrideItemDropFloorList;
    
    UVGOverrideItemDropAsset();

};

