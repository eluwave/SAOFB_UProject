#pragma once
#include "CoreMinimal.h"
#include "VGGameEventSelfSetupLocator.h"
#include "VGSummonParam.h"
#include "VGGameEventSummonGateLocator.generated.h"

class UVGGameEventSummonGateEvent;
class UVGVfxComponent;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventSummonGateLocator : public AVGGameEventSelfSetupLocator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_team_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSummonParam> m_summon_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* m_hologram_end_signal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_summon_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_broken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_check_interval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGameEventSummonGateEvent* m_event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGVfxComponent* m_vfx_component;
    
public:
    AVGGameEventSummonGateLocator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShowSummonMonster();
    
    UFUNCTION(BlueprintCallable)
    void HideSummonMonster();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableEventCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableEventCollision();
    
};

