#pragma once
#include "CoreMinimal.h"
#include "EVGCharaGender.h"
#include "Templates/SubclassOf.h"
#include "VGCostumeListAgentClosedDelegate.h"
#include "VGUIActor.h"
#include "VGWeaponListItemParam.h"
#include "VGCostumeListAgent.generated.h"

class UVGCharacterCalcComponent;
class UVGCostumeListWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCostumeListAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGCostumeListAgentClosed OnClosedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCostumeListWidget> widget_class;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCharacterCalcComponent> m_calc_component_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCostumeListWidget* m_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWeaponListItemParam> m_equip_param;
    
public:
    AVGCostumeListAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetGender(EVGCharaGender gender);
    
};

