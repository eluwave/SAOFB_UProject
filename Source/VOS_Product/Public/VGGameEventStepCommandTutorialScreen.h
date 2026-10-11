#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandTutorialScreen.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandTutorialScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tutorial_screen_data_id;
    
    FVGGameEventStepCommandTutorialScreen();
};

