#pragma once
#include "CoreMinimal.h"
#include "VGSaveSkillSetting.h"
#include "VGSaveFavoriteSkillSet.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveFavoriteSkillSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveSkillSetting> Settings;
    
    FVGSaveFavoriteSkillSet();
};

