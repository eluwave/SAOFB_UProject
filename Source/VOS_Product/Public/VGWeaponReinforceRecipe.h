#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGWeaponReinforceRecipeMaterial.h"
#include "VGWeaponReinforceRecipe.generated.h"

USTRUCT(BlueprintType)
struct FVGWeaponReinforceRecipe : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 category_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_optics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWeaponReinforceRecipeMaterial> Materials;
    
    VOS_PRODUCT_API FVGWeaponReinforceRecipe();
};

