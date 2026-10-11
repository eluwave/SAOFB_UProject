#pragma once
#include "CoreMinimal.h"
#include "VGActionReference.h"
#include "VGActionResource.generated.h"

class UVGActionLibrary;
class UVGTriggerLibrary;

USTRUCT(BlueprintType)
struct FVGActionResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVGActionReference reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGActionLibrary* action_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGTriggerLibrary* trigger_library;
    
    VOS_PRODUCT_API FVGActionResource();
};

