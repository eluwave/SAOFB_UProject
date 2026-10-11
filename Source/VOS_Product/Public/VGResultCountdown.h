#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGResultCountdown.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGResultCountdown : public UVGWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVGCountdownEnded);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGCountdownEnded m_countdown_ended;
    
    UVGResultCountdown();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float Secs);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerTick(int32 Secs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerSet(int32 Secs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerCompleted();
    
};

