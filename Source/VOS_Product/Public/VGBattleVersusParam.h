#pragma once
#include "CoreMinimal.h"
#include "VGBattleVersusParam.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleVersusParam {
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
    int16 kill;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 death;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 resurrect;
    
    VOS_PRODUCT_API FVGBattleVersusParam();
};

