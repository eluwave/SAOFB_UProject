#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Misc/StringClassReference.h"
#include "VGSituationEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSituationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference GameModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference Map;
    
    FVGSituationEntry();
};

