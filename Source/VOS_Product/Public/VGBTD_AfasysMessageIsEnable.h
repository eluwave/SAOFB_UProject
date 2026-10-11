#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_AfasysMessageIsEnable.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_AfasysMessageIsEnable : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_count_probability;
    
public:
    UVGBTD_AfasysMessageIsEnable();

};

