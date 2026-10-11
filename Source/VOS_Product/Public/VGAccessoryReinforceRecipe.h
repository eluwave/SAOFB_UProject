#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGPassiveSkill.h"
#include "VGAccessoryReinforceRecipeMaterial.h"
#include "VGAccessoryReinforceRecipe.generated.h"

USTRUCT(BlueprintType)
struct FVGAccessoryReinforceRecipe : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGPassiveSkill passive_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAccessoryReinforceRecipeMaterial> Materials;
    
    VOS_PRODUCT_API FVGAccessoryReinforceRecipe();
};

