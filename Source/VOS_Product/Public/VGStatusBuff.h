#pragma once
#include "CoreMinimal.h"
#include "EVGStatusBuff.h"
#include "EVGStatusBuffOp.h"
#include "VGStatusBuff.generated.h"

USTRUCT(BlueprintType)
struct FVGStatusBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusBuff Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusBuffOp Op;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    VOS_PRODUCT_API FVGStatusBuff();
};

