#pragma once
#include "CoreMinimal.h"
#include "VGCameraActor.h"
#include "VGCutInCamera.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCutInCamera : public AVGCameraActor {
    GENERATED_BODY()
public:
    AVGCutInCamera(const FObjectInitializer& ObjectInitializer);

};

