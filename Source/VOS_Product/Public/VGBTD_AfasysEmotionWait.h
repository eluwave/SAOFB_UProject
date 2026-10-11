#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_AfasysEmotionWait.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_AfasysEmotionWait : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float threshold_time;
    
public:
    UVGBTD_AfasysEmotionWait();

};

