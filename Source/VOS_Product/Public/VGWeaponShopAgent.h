#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGShopAgent.h"
#include "VGTextSymbol.h"
#include "VGWeaponShopAgent.generated.h"

class UVGWeaponCustomizeWidget;
class UVGWeaponReinforceWidget;
class UVGWeaponUnleashWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGWeaponShopAgent : public AVGShopAgent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWeaponReinforceWidget> m_weapon_reinforce_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWeaponCustomizeWidget> m_weapon_customize_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWeaponUnleashWidget> m_weapon_unleash_widget_class;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_help_text_reinforce[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_customize_material_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_conversion_material_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_unleash_material_id;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWeaponReinforceWidget* m_reinforce_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWeaponCustomizeWidget* m_customize_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWeaponUnleashWidget* m_unleash_widget;
    
public:
    AVGWeaponShopAgent(const FObjectInitializer& ObjectInitializer);

};

