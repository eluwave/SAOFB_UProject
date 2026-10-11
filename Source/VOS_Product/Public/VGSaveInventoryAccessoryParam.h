#pragma once
#include "CoreMinimal.h"
#include "VGPassiveSkillParam.h"
#include "VGSaveInventoryAccessoryParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveInventoryAccessoryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPassiveSkillParam> passive_skills;
    
    FVGSaveInventoryAccessoryParam();
};

