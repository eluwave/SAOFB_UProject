#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGTicketItemAsset.generated.h"

USTRUCT(BlueprintType)
struct FVGTicketItemAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    VOS_PRODUCT_API FVGTicketItemAsset();
};

