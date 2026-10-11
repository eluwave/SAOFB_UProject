#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGAccuracyRankMenuParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAccuracyRankMenuParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float threshold;
    
    FVGAccuracyRankMenuParam();
};

