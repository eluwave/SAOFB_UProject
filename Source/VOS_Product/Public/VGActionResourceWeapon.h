#pragma once
#include "CoreMinimal.h"
#include "VGActionResource.h"
#include "VGActionResourceWeapon.generated.h"

USTRUCT(BlueprintType)
struct FVGActionResourceWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVGActionResource weapon_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVGActionResource weapon_sub;
    
    VOS_PRODUCT_API FVGActionResourceWeapon();
};

