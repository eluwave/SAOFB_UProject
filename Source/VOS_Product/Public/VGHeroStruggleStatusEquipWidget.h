#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGWidget.h"
#include "VGHeroStruggleStatusEquipWidget.generated.h"

class UDataTable;
class UVGFriendListSkillSet;
class UVGFriendListSpecialEffect;
class UVGStatusMeter;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHeroStruggleStatusEquipWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_sp_effect_menu_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_melee_param;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFriendListSkillSet* m_weapon_skill00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFriendListSkillSet* m_weapon_skill01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFriendListSkillSet* m_gadget_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFriendListSpecialEffect* m_weapon_sp_effect00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFriendListSpecialEffect* m_weapon_sp_effect01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFriendListSpecialEffect* m_accessory_sp_effect00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFriendListSpecialEffect* m_accessory_sp_effect01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_weapon_proficiency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGStatusMeter* m_hp_meter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_target_chara_id;
    
public:
    UVGHeroStruggleStatusEquipWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInfoPage();
    
};

