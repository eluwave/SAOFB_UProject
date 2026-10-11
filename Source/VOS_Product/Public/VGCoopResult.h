#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGCoopResultParam.h"
#include "VGNetworkResult.h"
#include "VGCoopResult.generated.h"

class AVGOnlinePrizeResultAgent;
class UVGPrizeResultWidget;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCoopResult : public UVGNetworkResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGOnlinePrizeResultAgent> m_prize_result_agent_class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGPrizeResultWidget* m_prize_result_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_level_up_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGOnlinePrizeResultAgent* m_prize_result_agent;
    
public:
    UVGCoopResult();

    UFUNCTION(BlueprintCallable)
    void StartPrizeResult();
    
    UFUNCTION(BlueprintCallable)
    void SetResultParameters(const FVGCoopResultParam& param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetNewRecordFlag(bool IsNewRecord);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetClearTime(float Secs);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCountdownCompleted();
    
};

