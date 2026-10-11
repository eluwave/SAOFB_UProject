#pragma once
#include "CoreMinimal.h"
#include "EVGPadKey.h"
#include "Templates/SubclassOf.h"
#include "VGAIActionInputInterface.h"
#include "VGAnimNotifyState.h"
#include "VGANSAIBranch.generated.h"

class UVGAISkillCondition;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSAIBranch : public UVGAnimNotifyState, public IVGAIActionInputInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGPadKey::Type> m_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAISkillCondition> m_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dodge_action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_delay_input;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAISkillCondition> m_cancel_condition_forward;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAISkillCondition> m_cancel_condition_back;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAISkillCondition> m_cancel_condition_side;
    
    UVGANSAIBranch();

    // Fix for true pure virtual functions not being implemented
};

