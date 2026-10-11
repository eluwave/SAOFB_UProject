#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "Templates/SubclassOf.h"
#include "VGFriendListItem.h"
#include "VGMailData.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGFriendListWidget.generated.h"

class AVGMailAgent;
class UAnimMontage;
class UCanvasPanel;
class UDataTable;
class UVGCharacterCalcComponent;
class UVGDialog;
class UVGFriendListEquip;
class UVGPassiveSkillComponent;
class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGFriendListWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGMailAgent> m_mail_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_preview_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_character_role_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_mail_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_party_change_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_party_completed_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTextSymbol> m_sort_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_friend_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_friend_list_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_friend_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFriendListEquip* m_friend_equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_party_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> m_coop_join_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_mail_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_mail_list_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_sort_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_model_preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGMailAgent* m_mail_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGFriendListItem> m_friend_list_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMailData> m_selected_mail_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_select_friend_unique_id;
    
public:
    UVGFriendListWidget();

    UFUNCTION(BlueprintCallable)
    void OpenMailList();
    
    UFUNCTION(BlueprintCallable)
    void OpenMail();
    
    UFUNCTION(BlueprintCallable)
    void OpenFriendList();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetModelVisibility(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetInfoVisibility(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInfoPage();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnterFriendListItems();
    
    UFUNCTION(BlueprintCallable)
    void CloseMailList();
    
    UFUNCTION(BlueprintCallable)
    void CloseFriendList();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

