#pragma once
#include "CoreMinimal.h"
#include "EVGRoomCustomizeRoomItemDir.h"
#include "VGRoomCustomizeItemBlockPos.h"
#include "VGRoomItemID.h"
#include "VGRoomCustomizeItem.generated.h"

USTRUCT(BlueprintType)
struct FVGRoomCustomizeItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGRoomItemID item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGRoomCustomizeRoomItemDir::Type> dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGRoomCustomizeItemBlockPos pos;
    
    VOS_PRODUCT_API FVGRoomCustomizeItem();
};

