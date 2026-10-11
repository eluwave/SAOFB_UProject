#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_Blackboard.h"
#include "EVGBTD_CheckDistMode.h"
#include "EVGBTEval.h"
#include "VGBTD_CheckDistByKey.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckDistByKey : public UBTDecorator_Blackboard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGBTD_CheckDistMode::Type> m_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTEval m_eval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_value;
    
public:
    UVGBTD_CheckDistByKey();

};

