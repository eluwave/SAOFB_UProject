#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGFastTravelMap.h"
#include "VGTextSymbol.h"
#include "VGFastTravelArea.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGFastTravelArea : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol area_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName map_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> required_chunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGFastTravelMap> map_data;
    
    FVGFastTravelArea();
};

