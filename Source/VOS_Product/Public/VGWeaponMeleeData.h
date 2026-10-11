#pragma once
#include "CoreMinimal.h"
#include "VGWeaponCommonData.h"
#include "VGWeaponMeleeData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGWeaponMeleeData : public FVGWeaponCommonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bs_classify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bs_variation;
    
    FVGWeaponMeleeData();
};

