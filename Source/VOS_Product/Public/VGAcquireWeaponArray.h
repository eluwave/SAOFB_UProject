#pragma once
#include "CoreMinimal.h"
#include "VGAcquireWeapon.h"
#include "VGAcquireWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FVGAcquireWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAcquireWeapon> weapons;
    
    VOS_PRODUCT_API FVGAcquireWeaponArray();
};

