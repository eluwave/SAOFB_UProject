#pragma once
#include "CoreMinimal.h"
#include "VGMeshMaterialOverride.h"
#include "VGPassiveSkillParam.h"
#include "VGInventoryEntryAccessorySetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGInventoryEntryAccessorySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPassiveSkillParam> passive_skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMeshMaterialOverride material_override;
    
    FVGInventoryEntryAccessorySetting();
};

