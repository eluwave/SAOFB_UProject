#pragma once
#include "CoreMinimal.h"
#include "VGSkillListTabParam.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGSkillLearnWidget.generated.h"

class UVGCharacterCalcComponent;
class UVGDialog;
class UVGNavigationBar;
class UVGPassiveSkillComponent;
class UVGSkillHeader;
class UVGSkillLearnInfo;
class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGSkillLearnWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_confirm_learn_skill_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_learned_skill_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTextSymbol> m_filter_item_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_skill_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillLearnInfo* m_skill_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_filter_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNavigationBar* m_navigation_bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_learn_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillListTabParam> m_tab_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGSkillHeader*> m_skill_header_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGSkillHeader*> m_selected_skill_header_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
public:
    UVGSkillLearnWidget();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOpenAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayCloseAnime();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

