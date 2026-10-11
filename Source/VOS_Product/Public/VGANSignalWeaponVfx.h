#pragma once
#include "CoreMinimal.h"
#include "VGANSignalVfxBase.h"
#include "VGANWeaponVfxDesc.h"
#include "VGANSignalWeaponVfx.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANSignalWeaponVfx : public UVGANSignalVfxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGANWeaponVfxDesc> descs;
    
    UVGANSignalWeaponVfx();

};

