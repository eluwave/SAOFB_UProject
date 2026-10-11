#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckPlayable.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckPlayable : public UBTDecorator {
    GENERATED_BODY()
public:
    UVGBTD_CheckPlayable();

};

