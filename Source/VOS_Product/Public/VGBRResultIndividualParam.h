#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGNetworkResultIndividualParam.h"
#include "VGBRResultIndividualParam.generated.h"

USTRUCT(BlueprintType)
struct FVGBRResultIndividualParam : public FVGNetworkResultIndividualParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique origin_chara_unique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 customize_index;
    
    VOS_PRODUCT_API FVGBRResultIndividualParam();
};

