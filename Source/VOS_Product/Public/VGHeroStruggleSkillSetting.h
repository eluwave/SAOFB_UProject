#pragma once
#include "CoreMinimal.h"
#include "EVGSkillType.h"
#include "VGSaveSkillSettingLayer.h"
#include "VGHeroStruggleSkillSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleSkillSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillType skill_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveSkillSettingLayer skill_layer;
    
    VOS_PRODUCT_API FVGHeroStruggleSkillSetting();
};

