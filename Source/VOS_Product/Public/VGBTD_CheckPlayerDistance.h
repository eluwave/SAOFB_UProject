#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTComparision.h"
#include "VGBTD_CheckPlayerDistance.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckPlayerDistance : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTComparision m_comparision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_value;
    
public:
    UVGBTD_CheckPlayerDistance();

};

