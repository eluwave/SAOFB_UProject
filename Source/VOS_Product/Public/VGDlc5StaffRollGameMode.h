#pragma once
#include "CoreMinimal.h"
#include "VGDlcStaffRollGameMode.h"
#include "VGDlc5StaffRollGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGDlc5StaffRollGameMode : public AVGDlcStaffRollGameMode {
    GENERATED_BODY()
public:
    AVGDlc5StaffRollGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LevelSequenceEnd();
    
};

