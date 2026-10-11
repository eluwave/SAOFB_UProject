#pragma once
#include "CoreMinimal.h"
#include "VGCustomizeSlotCharacter.h"
#include "VGWidget.h"
#include "VGCustomizeSlotStatus.generated.h"

class UCanvasPanel;
class UDataTable;
class UVGCharacterCalcComponent;
class UVGNavigationBar;
class UVGPassiveSkillComponent;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCustomizeSlotStatus : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_sp_effect_menu_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_player_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_afasys_name;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanel*> m_status_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCustomizeSlotCharacter> m_slot_chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNavigationBar* m_navigation_bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
public:
    UVGCustomizeSlotStatus();

    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInfoPage(int32 page);
    
public:
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

