#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGItemDropSlot.h"
#include "VGItemDropGroup.generated.h"

class UVGItemDropModifier;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemDropGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGItemDropSlot> item_slot_list;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGItemDropModifier> modifier;
    
    FVGItemDropGroup();
};

