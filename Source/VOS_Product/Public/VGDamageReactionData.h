#pragma once
#include "CoreMinimal.h"
#include "EVGDamageReactionAttr.h"
#include "VGDamageReactionData.generated.h"

USTRUCT(BlueprintType)
struct FVGDamageReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGDamageReactionAttr> attr;
    
    VOS_PRODUCT_API FVGDamageReactionData();
};

