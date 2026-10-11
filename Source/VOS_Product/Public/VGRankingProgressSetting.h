#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGRankingProgressSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGRankingProgressSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress_flag_index;
    
    VOS_PRODUCT_API FVGRankingProgressSetting();
};

