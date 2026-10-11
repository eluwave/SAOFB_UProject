#pragma once
#include "CoreMinimal.h"
#include "VGGameEventFlagSwitch.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventFlagSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> on_flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> off_flags;
    
    FVGGameEventFlagSwitch();
};

