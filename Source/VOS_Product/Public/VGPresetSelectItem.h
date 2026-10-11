#pragma once
#include "CoreMinimal.h"
#include "VGPresetSelectItem.generated.h"

USTRUCT(BlueprintType)
struct FVGPresetSelectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    VOS_PRODUCT_API FVGPresetSelectItem();
};

