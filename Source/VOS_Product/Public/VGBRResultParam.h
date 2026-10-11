#pragma once
#include "CoreMinimal.h"
#include "EVGBattleType.h"
#include "VGBRResultIndividualParam.h"
#include "VGBRResultParam.generated.h"

USTRUCT(BlueprintType)
struct FVGBRResultParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBRResultIndividualParam> params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleType battle_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clear_time;
    
    VOS_PRODUCT_API FVGBRResultParam();
};

