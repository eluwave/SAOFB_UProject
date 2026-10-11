#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGSkillListTabParam.h"
#include "VGUIActor.h"
#include "VGSkillLearnAgent.generated.h"

class UVGCharacterCalcComponent;
class UVGPassiveSkillComponent;
class UVGSkillLearnWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillLearnAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGSkillLearnWidget> m_skilllearn_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillListTabParam> m_skill_tab_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillListTabParam> m_gadget_tab_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCharacterCalcComponent> m_calc_component_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillLearnWidget* m_skilllearn_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
public:
    AVGSkillLearnAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

