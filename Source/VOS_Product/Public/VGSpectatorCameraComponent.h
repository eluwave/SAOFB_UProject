#pragma once
#include "CoreMinimal.h"
#include "VGCameraComponent.h"
#include "VGSpectatorCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGSpectatorCameraComponent : public UVGCameraComponent {
    GENERATED_BODY()
public:
    UVGSpectatorCameraComponent(const FObjectInitializer& ObjectInitializer);

};

