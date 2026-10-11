#pragma once
#include "CoreMinimal.h"
#include "VGWeaponReinforceRecipeMaterial.generated.h"

USTRUCT(BlueprintType)
struct FVGWeaponReinforceRecipeMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 amount_work;
    
    VOS_PRODUCT_API FVGWeaponReinforceRecipeMaterial();
};

