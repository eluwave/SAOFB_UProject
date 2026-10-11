#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGAbyssDungeonLevelData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAbyssDungeonLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float exp_rate;
    
    FVGAbyssDungeonLevelData();
};

