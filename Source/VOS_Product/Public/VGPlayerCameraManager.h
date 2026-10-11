#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "VGPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AVGPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

