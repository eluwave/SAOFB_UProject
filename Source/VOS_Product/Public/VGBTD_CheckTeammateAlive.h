#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckTeammateAlive.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckTeammateAlive : public UBTDecorator {
    GENERATED_BODY()
public:
    UVGBTD_CheckTeammateAlive();

};

