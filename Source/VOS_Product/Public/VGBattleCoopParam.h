#pragma once
#include "CoreMinimal.h"
#include "VGBattleCoopParam.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleCoopParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unique_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float heal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 marks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Dead;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 resurrect;
    
    VOS_PRODUCT_API FVGBattleCoopParam();
};

