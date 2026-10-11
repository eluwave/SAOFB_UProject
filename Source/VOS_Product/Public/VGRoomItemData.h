#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGRoomCustomizeItemBlockPos.h"
#include "VGRoomItemID.h"
#include "VGRoomItemData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVGRoomItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGRoomItemID item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> actort_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGRoomCustomizeItemBlockPos Size;
    
    VOS_PRODUCT_API FVGRoomItemData();
};

