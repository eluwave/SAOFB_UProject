#pragma once
#include "CoreMinimal.h"
#include "VGActionEventWork.generated.h"

class UVGActionEvent;

USTRUCT(BlueprintType)
struct FVGActionEventWork {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 buffer[256];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 eval_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGActionEvent* action_event;
    
    VOS_PRODUCT_API FVGActionEventWork();
};

