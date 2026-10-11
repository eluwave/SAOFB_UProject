#pragma once
#include "CoreMinimal.h"
#include "VGSkillSetting.h"
#include "VGFavoriteSkillSet.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGFavoriteSkillSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillSetting> setting;
    
    FVGFavoriteSkillSet();
};

