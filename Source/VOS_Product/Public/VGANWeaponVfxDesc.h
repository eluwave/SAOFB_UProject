#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponDivision.h"
#include "EVGWeaponFormat.h"
#include "VGANWeaponVfxDesc.generated.h"

class UVGVfxSignalAsset;

USTRUCT(BlueprintType)
struct FVGANWeaponVfxDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponDivision division;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponFormat Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 color_variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* Asset;
    
    VOS_PRODUCT_API FVGANWeaponVfxDesc();
};

