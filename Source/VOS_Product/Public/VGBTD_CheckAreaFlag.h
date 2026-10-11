#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTAreaFlag.h"
#include "VGBTD_CheckAreaFlag.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckAreaFlag : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGBTAreaFlag> m_flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_arrival_time;
    
public:
    UVGBTD_CheckAreaFlag();

};

