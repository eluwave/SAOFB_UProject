#pragma once
#include "CoreMinimal.h"
#include "VGActionReference.generated.h"

class UVGActionLibrary;
class UVGTriggerLibrary;

USTRUCT(BlueprintType)
struct FVGActionReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGActionLibrary* action_library_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTriggerLibrary* trigger_library_ref;
    
    VOS_PRODUCT_API FVGActionReference();
};

