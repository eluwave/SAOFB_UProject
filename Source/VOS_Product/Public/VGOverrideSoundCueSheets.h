#pragma once
#include "CoreMinimal.h"
#include "VGOverrideSoundCueSheets.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct FVGOverrideSoundCueSheets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* SE;
    
    VOS_PRODUCT_API FVGOverrideSoundCueSheets();
};

