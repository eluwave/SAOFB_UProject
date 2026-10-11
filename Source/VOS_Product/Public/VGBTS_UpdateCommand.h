#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "VGBTS_UpdateCommand.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTS_UpdateCommand : public UBTService {
    GENERATED_BODY()
public:
    UVGBTS_UpdateCommand();

};

