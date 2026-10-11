#pragma once
#include "CoreMinimal.h"
#include "VGPassiveSkillParam.h"
#include "VGWeaponVariableParam.generated.h"

USTRUCT(BlueprintType)
struct FVGWeaponVariableParam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPassiveSkillParam> m_passive_skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_customize_skill_num;
    
public:
    VOS_PRODUCT_API FVGWeaponVariableParam();
};

