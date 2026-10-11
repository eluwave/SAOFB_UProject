#pragma once
#include "CoreMinimal.h"
#include "VGANSSignalVfxBase.h"
#include "VGANWeaponVfxDesc.h"
#include "VGANSSignalWeaponVfx.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSSignalWeaponVfx : public UVGANSSignalVfxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGANWeaponVfxDesc> descs;
    
    UVGANSSignalWeaponVfx();

};

