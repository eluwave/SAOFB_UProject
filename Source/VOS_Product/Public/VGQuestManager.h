#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVGQuestState.h"
#include "EVGQuestTask.h"
#include "EVGQuestTaskState.h"
#include "VGQuestDelegateDelegate.h"
#include "VGQuestReward.h"
#include "VGQuestTask.h"
#include "VGQuestTaskDelegateDelegate.h"
#include "VGQuestManager.generated.h"

class UVGQuestAsset;
class UVGQuestManager;
class UVGQuestRecord;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGQuestManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGQuestDelegate QuestCompletedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGQuestTaskDelegate TaskAchievedDelegate;
    
    UVGQuestManager();

    UFUNCTION(BlueprintCallable)
    void WithdrawQuests(FName client_id);
    
    UFUNCTION(BlueprintCallable)
    static UVGQuestRecord* StartQuestByName(FName Name, FName client_id);
    
    UFUNCTION(BlueprintCallable)
    void StartQuest(UVGQuestRecord* record);
    
    UFUNCTION(BlueprintCallable)
    void ReportTask(EVGQuestTask::Type Type, const FString& param, int32 value, bool isOverwrite);
    
    UFUNCTION(BlueprintCallable)
    void RegisterQuests(const TArray<UVGQuestRecord*>& records);
    
    UFUNCTION(BlueprintCallable)
    void RegisterQuest(UVGQuestRecord* record);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVGQuestRecord* NewQuestByName(FName Name, FName client_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGQuestRecord* GetQuestWithState(FName quest_id, FName client_id, EVGQuestState::Type State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGQuestTaskState::Type GetQuestTaskState(FName quest_id, FName client_id, FName task_name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGQuestState::Type GetQuestState(FName quest_id, FName client_id) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGQuestRecord* GetQuest(FName quest_id, FName ClientId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVGQuestManager* Get();
    
    UFUNCTION(BlueprintCallable)
    FText GenerateTaskText(const FVGQuestTask& task, const UVGQuestRecord* record);
    
    UFUNCTION(BlueprintCallable)
    FText GenerateRewardText(const FVGQuestReward& reward, int32 text_type);
    
    UFUNCTION(BlueprintCallable)
    UVGQuestAsset* FindQuestAsset(const UVGQuestRecord* record);
    
    UFUNCTION(BlueprintCallable)
    UVGQuestRecord* FindQuest(FName Name, FName client_id);
    
    UFUNCTION(BlueprintCallable)
    bool EnumQuestsByClient(FName ClientId, TArray<UVGQuestRecord*>& OutVal);
    
    UFUNCTION(BlueprintCallable)
    void DeleteQuestAtIndex(int32 index, bool RequestRemove);
    
    UFUNCTION(BlueprintCallable)
    void DeleteQuest(const UVGQuestRecord* record, bool RequestRemove);
    
    UFUNCTION(BlueprintCallable)
    void CreateQuests(const TArray<UVGQuestAsset*>& assets, FName client_id, TArray<UVGQuestRecord*>& OutVal);
    
    UFUNCTION(BlueprintCallable)
    UVGQuestRecord* CreateQuest(const UVGQuestAsset* Asset, FName client_id, bool check_trigger);
    
    UFUNCTION(BlueprintCallable)
    void Completion(UVGQuestRecord* record);
    
    UFUNCTION(BlueprintCallable)
    void CancelQuest(UVGQuestRecord* record);
    
};

