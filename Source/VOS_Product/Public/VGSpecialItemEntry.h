#pragma once
#include "CoreMinimal.h"
#include "VGSpecialItemEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSpecialItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 flag_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName item_id;
    
    FVGSpecialItemEntry();
};

