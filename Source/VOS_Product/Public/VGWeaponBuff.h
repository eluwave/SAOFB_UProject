#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponBuff.h"
#include "VGWeaponBuff.generated.h"

USTRUCT(BlueprintType)
struct FVGWeaponBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponBuff Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    VOS_PRODUCT_API FVGWeaponBuff();
};

