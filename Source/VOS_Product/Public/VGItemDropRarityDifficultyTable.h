#pragma once
#include "CoreMinimal.h"
#include "VGItemDropRarityDifficultyTable.generated.h"

class UVGItemDropRarityTable;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemDropRarityDifficultyTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropRarityTable* easy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropRarityTable* Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropRarityTable* hard;
    
    FVGItemDropRarityDifficultyTable();
};

