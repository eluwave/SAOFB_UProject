#pragma once
#include "CoreMinimal.h"
#include "VGAccessoryReinforceRecipeMaterial.generated.h"

USTRUCT(BlueprintType)
struct FVGAccessoryReinforceRecipeMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 amount;
    
    VOS_PRODUCT_API FVGAccessoryReinforceRecipeMaterial();
};

