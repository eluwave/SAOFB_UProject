#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "TutorialHitTriggerBoxDelegate.h"
#include "TutorialTaskCompletedDelegate.h"
#include "TutorialTaskPostQuoteDelegate.h"
#include "TutorialTaskStartedDelegate.h"
#include "TutorialTaskWorker.h"
#include "VGTutorialManager.generated.h"

class AVGGameEventHuman;
class AVGTutorialManager;
class UDataTable;
class UObject;
class UVGSoundComponent;
class UVGTutorialHelpBoardWidget;
class UVGTutorialScriptIndex;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGTutorialManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialHitTriggerBox m_tutorial_trigger_box_overlap_begin_event;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTaskStarted m_tutorial_seqnence_started_event;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTaskPostQuote m_tutorial_sequence_post_quote_event;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTaskCompleted m_tutorial_sequence_completed_event;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTutorialHelpBoardWidget> m_hud_class_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTutorialScriptIndex* m_tutorial_script_index_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_tutorial_data_base_table_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_tutorial_script_battle_voice_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_tutorial_script_ufg_voice_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_tutorial_script_ufg_afasys_voice_ref;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTutorialTaskWorker> m_tutorial_tasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTutorialScriptIndex* m_tutorial_script_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTutorialHelpBoardWidget* m_hud_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_pending_script_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGGameEventHuman*> m_event_humans;
    
public:
    AVGTutorialManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartTutorialTask(const FName& TutorialTaskId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHelpTexts(const TArray<FString>& HelpTexts);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(const FString& CueName, bool IsAfasys, bool IsClearPlayBackIds);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSoundReportPlayEnd(int32 PlayBackId);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyGameStart(bool Started);
    
    UFUNCTION(BlueprintCallable)
    static AVGTutorialManager* GetTutorialManager(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void EnableUFG(bool On);
    
    UFUNCTION(BlueprintCallable)
    void EnableShot(bool On);
    
    UFUNCTION(BlueprintCallable)
    void AddHelpTexts(const TArray<FString>& HelpTexts);
    
};

