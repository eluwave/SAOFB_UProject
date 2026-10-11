#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGOverrideItemDrop.generated.h"

class UVGItemDropTableSet;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGOverrideItemDrop : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString blue_print_class_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropTableSet* item_drop_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_drop_resporn_enemy;
    
    FVGOverrideItemDrop();
};

