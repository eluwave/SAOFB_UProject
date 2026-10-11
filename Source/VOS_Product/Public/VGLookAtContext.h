#pragma once
#include "CoreMinimal.h"

#include "VGLookAtContext.generated.h"

USTRUCT(BlueprintType)
struct FVGLookAtContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotator;
    
    VOS_PRODUCT_API FVGLookAtContext();
};

