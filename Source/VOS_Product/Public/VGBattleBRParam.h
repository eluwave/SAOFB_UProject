#pragma once
#include "CoreMinimal.h"
#include "VGBattleVersusParam.h"
#include "VGBattleBRParam.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleBRParam : public FVGBattleVersusParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 score;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 rank;
    
    VOS_PRODUCT_API FVGBattleBRParam();
};

