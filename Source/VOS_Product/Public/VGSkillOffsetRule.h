#pragma once
#include "CoreMinimal.h"
#include "EVGSkillOffsetInput.h"
#include "EVGSkillOffsetState.h"
#include "EVGSkillOffsetWeapon.h"
#include "VGSkillOffsetRule.generated.h"

USTRUCT(BlueprintType)
struct FVGSkillOffsetRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillOffsetState state_rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillOffsetInput input_rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillOffsetWeapon weapon_rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 action_id;
    
    VOS_PRODUCT_API FVGSkillOffsetRule();
};

