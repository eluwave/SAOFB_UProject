#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGHeroStruggleSkillSetting.h"
#include "VGHeroStruggleSkillInfoSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleSkillInfoSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleSkillSetting main_weapon_skill_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleSkillSetting sub_weapon_skill_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleSkillSetting gadget_skill_setting;
    
    VOS_PRODUCT_API FVGHeroStruggleSkillInfoSetting();
};

