#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckHeatGauge.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckHeatGauge : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_over_threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_release_threshold;
    
public:
    UVGBTD_CheckHeatGauge();

};

