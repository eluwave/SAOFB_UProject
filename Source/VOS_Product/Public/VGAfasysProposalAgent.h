#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGAfasysMenuMessage.h"
#include "VGAfasysMenuSelectMessage.h"
#include "VGAfasysProposalReport.h"
#include "VGUIActor.h"
#include "VGAfasysProposalAgent.generated.h"

class AVGAdventureAgent;
class AVGAfasysMenuCharacter;
class UDataTable;
class UVGAfasysFundManagementAsset;
class UVGAvatarCustomizeComponent;
class UVGAvatarCustomizeSetting;
class UVGMessageWindow;
class UVGSelectionWindow;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysProposalAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMessageWindow> m_message_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGSelectionWindow> m_selection_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_shoping_item_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAfasysFundManagementAsset* m_fund_management_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_costume_change_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_hair_change_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_body_change_start_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_hair_change_start_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuSelectMessage> m_change_select_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_buy_item_storage_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_buy_item_itembox_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_buy_item_failure_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_buy_item_dialog_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_buy_items_dialog_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysProposalReport> m_reports;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAdventureAgent* m_adventure_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeComponent* m_avater_customize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_customize_setting;
    
public:
    AVGAfasysProposalAgent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStepEndCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedCallback(int32 index, const FString& tag);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeEndCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnAvatarApplyCompletedCallback(bool IsFlag);
    
};

