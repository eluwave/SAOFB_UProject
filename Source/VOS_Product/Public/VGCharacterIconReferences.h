#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGCharacterIconReferences.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterIconReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> references;
    
    FVGCharacterIconReferences();
};

