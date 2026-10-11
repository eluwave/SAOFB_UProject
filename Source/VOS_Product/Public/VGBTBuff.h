#pragma once
#include "CoreMinimal.h"
#include "EVGStatusBuff.h"
#include "EVGStatusBuffOp.h"
#include "VGBTBuff.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBTBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusBuff buff_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusBuffOp buff_op;
    
    FVGBTBuff();
};

