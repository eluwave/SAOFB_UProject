#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckActionMode.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckActionMode : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_action_mode;
    
public:
    UVGBTD_CheckActionMode();

};

