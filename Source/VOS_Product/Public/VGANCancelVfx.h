#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotify.h"
#include "VGANCancelVfx.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANCancelVfx : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName signal_name;
    
    UVGANCancelVfx();

};

