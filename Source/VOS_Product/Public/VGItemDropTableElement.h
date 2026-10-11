#pragma once
#include "CoreMinimal.h"
#include "EVGGameDifficulty.h"
#include "VGItemDropTableElement.generated.h"

class UVGItemDropRarityTable;
class UVGItemDropTable;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemDropTableElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameDifficulty difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropTable* item_drop_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropRarityTable* rarity_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float effect_max_factor;
    
    FVGItemDropTableElement();
};

