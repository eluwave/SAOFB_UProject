#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckMoving.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckMoving : public UBTDecorator {
    GENERATED_BODY()
public:
    UVGBTD_CheckMoving();

};

