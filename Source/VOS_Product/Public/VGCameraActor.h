#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "VGCameraActor.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AVGCameraActor(const FObjectInitializer& ObjectInitializer);

};

