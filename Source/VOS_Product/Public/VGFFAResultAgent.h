#pragma once
#include "CoreMinimal.h"
#include "EVGFFADispResult.h"
#include "Templates/SubclassOf.h"
#include "VGFFAResultListAgentCompletedDelegate.h"
#include "VGFFAResultListAgentLoadCompletedDelegate.h"
#include "VGQuestReward.h"
#include "VGUIActor.h"
#include "VGFFAResultAgent.generated.h"

class UVGFFAResultWidget;
class UVGQuestRecord;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGFFAResultAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGFFAResultListAgentCompleted OnCompletedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGFFAResultListAgentLoadCompleted OnLoadCompletedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGFFAResultWidget> m_result_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFFAResultWidget* m_result_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVGQuestRecord> m_quest_record;
    
public:
    AVGFFAResultAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetResultParameters(TArray<FVGQuestReward>& rewards);
    
    UFUNCTION(BlueprintCallable)
    void SetDispResult(TArray<EVGFFADispResult>& Results);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDispResult(EVGFFADispResult result);
    
    UFUNCTION(BlueprintCallable)
    void Exit();
    
};

