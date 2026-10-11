#pragma once
#include "CoreMinimal.h"
#include "EVGNetworkResultPhase.h"
#include "EVGNetworkResultScoreType.h"
#include "VGNetworkResultParam.h"
#include "VGNetworkResultScoreBoardParam.h"
#include "VGQuestReward.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGNetworkResult.generated.h"

class UVGQuestRecord;
class UVGResultCountdown;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNetworkResult : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVGNetworkResultScoreType, FVGTextSymbol> m_score_type_name_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_time_limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGNetworkResultPhase m_current_phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGResultCountdown* m_countdown_widget;
    
public:
    UVGNetworkResult();

    UFUNCTION(BlueprintCallable)
    void SetResultParameters(const FVGNetworkResultParam& param);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestRecord(UVGQuestRecord* QuestRecord);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTotalScoreBoardsParam(EVGNetworkResultScoreType ScoreType, const FVGNetworkResultScoreBoardParam& param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRewardParam(const TArray<FVGQuestReward>& rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIndividualScoreBoardsParam(EVGNetworkResultScoreType ScoreType, const FVGNetworkResultScoreBoardParam& param);
    
    UFUNCTION(BlueprintCallable)
    void OnCountdownCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePhase(EVGNetworkResultPhase OldPhase, EVGNetworkResultPhase NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormattedTimeString(float Secs) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangePhase(EVGNetworkResultPhase phase);
    
};

