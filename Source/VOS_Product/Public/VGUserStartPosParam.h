#pragma once
#include "CoreMinimal.h"
#include "VGUserStartPosParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGUserStartPosParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString unique_code;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 start_pos_id;
    
    FVGUserStartPosParam();
};

