#pragma once
#include "CoreMinimal.h"
#include "DMAutoInputProcBase.h"
#include "EDMAutoInputKeyType.h"
#include "EDMAutoInputStickType.h"
#include "EDMAutoInputTriggerType.h"
#include "DMMonkeyTestProc.generated.h"

UCLASS(Blueprintable)
class DMAUTOINPUT_API UDMMonkeyTestProc : public UDMAutoInputProcBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_input_change_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDMAutoInputKeyType, bool> m_digital_key_ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDMAutoInputTriggerType, bool> m_trigger_ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDMAutoInputStickType, bool> m_stick_ability;
    
public:
    UDMMonkeyTestProc();

};

