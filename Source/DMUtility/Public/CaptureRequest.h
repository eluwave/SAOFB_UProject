#pragma once
#include "CoreMinimal.h"
#include "CaptureRequest.generated.h"

class UMaterialInterface;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FCaptureRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Mat;
    
    DMUTILITY_API FCaptureRequest();
};

