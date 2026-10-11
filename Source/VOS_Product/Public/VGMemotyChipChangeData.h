#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsSortType.h"
#include "EVGItemCategory.h"
#include "EVGMemoryChipChangeMode.h"
#include "VGMemoryChipChangeTabParam.h"
#include "VGMemotyChipChangeData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMemotyChipChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGItemCategory item_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGMemoryChipChangeMode::Type>> Types;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGGoodsSortType> sort_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMemoryChipChangeTabParam> tab_params;
    
    FVGMemotyChipChangeData();
};

