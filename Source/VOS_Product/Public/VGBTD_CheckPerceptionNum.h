#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTActorTarget.h"
#include "EVGBTComparision.h"
#include "VGBTD_CheckPerceptionNum.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckPerceptionNum : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTActorTarget m_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_check_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTComparision m_comparision;
    
public:
    UVGBTD_CheckPerceptionNum();

};

