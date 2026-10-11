#pragma once
#include "CoreMinimal.h"
#include "EVGPadKey.h"
#include "Templates/SubclassOf.h"
#include "VGAIActionInputInterface.h"
#include "VGAnimNotify.h"
#include "VGANAIBranch.generated.h"

class UVGAISkillCondition;

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANAIBranch : public UVGAnimNotify, public IVGAIActionInputInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGPadKey::Type> m_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAISkillCondition> m_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dodge_action;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAISkillCondition> m_cancel_condition_forward;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAISkillCondition> m_cancel_condition_back;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAISkillCondition> m_cancel_condition_side;
    
    UVGANAIBranch();

    // Fix for true pure virtual functions not being implemented
};

