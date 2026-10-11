#pragma once
#include "CoreMinimal.h"
#include "VGANSSignalVfxBase.h"
#include "VGANSIterativeSignalVfx.generated.h"

class UVGVfxSignalAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSIterativeSignalVfx : public UVGANSSignalVfxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float interval;
    
    UVGANSIterativeSignalVfx();

};

