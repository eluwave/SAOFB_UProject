#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGPowerUpAlertMaterialParam.h"
#include "VGPowerUpAlertComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGPowerUpAlertComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerUpAlertEvent, UActorComponent*, Component);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerUpAlertEvent OnPowerUpAlertTimerFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerUpAlertEvent OnSetPeakColorFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerUpAlertEvent OnSetBaseColorFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_start_frequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_last_frequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_set_peak_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_set_base_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPowerUpAlertMaterialParam> m_material_params;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_change_powerup_time;
    
public:
    UVGPowerUpAlertComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartPowerUpAlert(float power_up_time);
    
    UFUNCTION(BlueprintCallable)
    void ResetPowerUpAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartAlert() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlertPeak() const;
    
};

