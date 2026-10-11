#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Misc/StringClassReference.h"
#include "EVGRanking.h"
#include "OnMessageWindowVisibilityEventDelegate.h"
#include "OnOnlineStartUpFinishedEventDelegate.h"
#include "OnSetQuestRankingListEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "VGTextSymbol.h"
#include "VGUIActor.h"
#include "VGQuestRankingManager.generated.h"

class AVGNetworkRankingListAgent;
class AVGQuestRankingManager;
class UObject;
class UVGDialog;
class UVGNetworkRankingWidget;
class UVGOnlineStartup;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGQuestRankingManager : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageWindowVisibilityEvent OnMessageWindowVisibilityEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineStartUpFinishedEvent OnOnlineStartUpFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetQuestRankingListEvent OnSetQuestRankingListEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_connecting_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGOnlineStartup* m_online_startup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_network_ranking_widget_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_quest_ranking_list_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGNetworkRankingWidget> m_network_ranking_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGNetworkRankingListAgent> m_quest_ranking_list_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNetworkRankingWidget* m_network_ranking_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGNetworkRankingListAgent* m_quest_ranking_list_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_online_startup_error_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_online_startup_error_dialog_body;
    
public:
    AVGQuestRankingManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetQuestID(FVGTextSymbol quest_name);
    
    UFUNCTION(BlueprintCallable)
    void SelectRankingType(EVGRanking::Type Type);
    
    UFUNCTION(BlueprintCallable)
    static AVGQuestRankingManager* GetVGQuestRankingManager(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void CancelSelect();
    
};

