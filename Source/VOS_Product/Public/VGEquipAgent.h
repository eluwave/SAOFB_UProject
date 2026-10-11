#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGWeaponListItemParam.h"
#include "VGEquipAgent.generated.h"

class AVGSubSceneAgent;
class UVGCharacterCalcComponent;
class UVGEquipWidget;
class UVGPassiveSkillComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGEquipAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGEquipWidget> equip_widget_class;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCharacterCalcComponent> m_calc_component_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGEquipWidget* m_equip_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWeaponListItemParam> m_equip_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSubSceneAgent* m_subscene;
    
public:
    AVGEquipAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

