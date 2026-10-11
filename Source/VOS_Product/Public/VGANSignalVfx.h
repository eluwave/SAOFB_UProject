#pragma once
#include "CoreMinimal.h"
#include "VGANSignalVfxBase.h"
#include "VGANSignalVfx.generated.h"

class UVGVfxSignalAsset;

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANSignalVfx : public UVGANSignalVfxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* Asset;
    
    UVGANSignalVfx();

};

