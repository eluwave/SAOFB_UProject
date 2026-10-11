#pragma once
#include "CoreMinimal.h"
#include "VGCoopJoinNpcData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCoopJoinNpcData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 chara_id;
    
    FVGCoopJoinNpcData();
};

