#pragma once
#include "CoreMinimal.h"
#include "VGInventoryEntrySetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGInventoryEntrySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 possession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_unidentified;
    
    FVGInventoryEntrySetting();
};

