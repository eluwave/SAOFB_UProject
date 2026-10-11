#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "VGStringClassReferences.generated.h"

USTRUCT(BlueprintType)
struct FVGStringClassReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStringClassReference> references;
    
    VOS_PRODUCT_API FVGStringClassReferences();
};

