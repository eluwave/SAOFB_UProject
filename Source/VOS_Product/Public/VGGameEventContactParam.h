#pragma once
#include "CoreMinimal.h"
#include "VGGameEventContactParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventContactParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_begin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_first;
    
    FVGGameEventContactParam();
};

