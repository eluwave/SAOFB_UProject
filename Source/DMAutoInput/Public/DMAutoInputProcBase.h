#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDMAutoInputKeyType.h"
#include "EDMAutoInputStickType.h"
#include "EDMAutoInputTriggerType.h"
#include "DMAutoInputProcBase.generated.h"

UCLASS(Blueprintable)
class DMAUTOINPUT_API UDMAutoInputProcBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_initial_repeat_delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_repeat_delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_left_trigger_threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_right_trigger_threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_left_stick_deadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_right_stick_deadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_controller_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDMAutoInputKeyType, FName> m_digital_key_name_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDMAutoInputKeyType, FName> m_analog_key_name_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDMAutoInputKeyType, bool> m_key_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDMAutoInputKeyType, float> m_key_value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDMAutoInputKeyType, double> m_key_next_repeat_time;
    
public:
    UDMAutoInputProcBase();

    UFUNCTION(BlueprintCallable)
    void ToggleDigitalInput(EDMAutoInputKeyType Key);
    
    UFUNCTION(BlueprintCallable)
    void SetDigitalInput(EDMAutoInputKeyType Key, bool new_state);
    
    UFUNCTION(BlueprintCallable)
    void SetAnalogTriggerInput(EDMAutoInputTriggerType Trigger, float value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnalogStickInput(EDMAutoInputStickType stick, float X, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSendControllerEvents();
    
};

