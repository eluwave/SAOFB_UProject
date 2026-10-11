#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGStaffRollGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGStaffRollGameModeBase : public AVGGameMode {
    GENERATED_BODY()
public:
    AVGStaffRollGameModeBase(const FObjectInitializer& ObjectInitializer);

};

