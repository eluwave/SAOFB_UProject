#pragma once
#include "CoreMinimal.h"
#include "VGBreakItemDropTableSet.generated.h"

class UVGItemDropTableSet;

USTRUCT(BlueprintType)
struct FVGBreakItemDropTableSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName parts_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropTableSet* item_drop_table;
    
    VOS_PRODUCT_API FVGBreakItemDropTableSet();
};

