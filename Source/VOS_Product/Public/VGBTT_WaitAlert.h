#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "VGBTT_WaitAlert.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_WaitAlert : public UBTTask_Wait {
    GENERATED_BODY()
public:
    UVGBTT_WaitAlert();

};

