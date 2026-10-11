#pragma once
#include "CoreMinimal.h"
#include "VGANSSignalVfxBase.h"
#include "VGANSSignalVfx.generated.h"

class UVGVfxSignalAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSSignalVfx : public UVGANSSignalVfxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* Asset;
    
    UVGANSSignalVfx();

};

