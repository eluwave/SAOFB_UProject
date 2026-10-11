#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGTicketAgentAlphabetAcceossryCompleteDelegateDelegate.h"
#include "VGTicketAgentItemExchangeCompleteDelegateDelegate.h"
#include "VGTicketAgentItemExchangeStartDelegateDelegate.h"
#include "VGTicketAgentReadyDelegateDelegate.h"
#include "VGUIActor.h"
#include "VGTicketAgent.generated.h"

class UDataTable;
class UVGTicketAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGTicketAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_item_exchange_dialog_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_item_exchange_itembox_dialog_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_item_bulk_exchange_dialog_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_alphabet_complete_dialog_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_alphabet_complete_item_id_left_no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_alphabet_complete_item_id_right_no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_alphabet_complete_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_alphabet_complete_progress_flag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTicketAgentReadyDelegate OnReadyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTicketAgentItemExchangeStartDelegate OnItemExchangeStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTicketAgentItemExchangeCompleteDelegate OnItemExchangeCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTicketAgentAlphabetAcceossryCompleteDelegate OnAlphabetAcceossryCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_item_table;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTicketAsset* m_asset;
    
public:
    AVGTicketAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartItemExchange();
    
    UFUNCTION(BlueprintCallable)
    void StartItemBulkExchange();
    
    UFUNCTION(BlueprintCallable)
    void StartAlphabetComplete();
    
    UFUNCTION(BlueprintCallable)
    void SetTicketAsset(UVGTicketAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    bool IsTicketPossess();
    
    UFUNCTION(BlueprintCallable)
    bool IsInventoryCapable();
    
    UFUNCTION(BlueprintCallable)
    bool IsAlphabetCompleteReward();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTicketPossessionAmount();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

