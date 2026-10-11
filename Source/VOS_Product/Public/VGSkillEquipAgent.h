#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "EVGSkillEquipMode.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGSkillEquipAgent.generated.h"

class UVGCharacterCalcComponent;
class UVGPassiveSkillComponent;
class UVGSkillEquipWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSkillEquipAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGSkillEquipWidget> skillequip_widget_class;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCharacterCalcComponent> m_calc_component_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillEquipWidget* m_skillequip_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
public:
    AVGSkillEquipAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetMode(EVGSkillEquipMode mode);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(EVGCharaUnique ID);
    
};

