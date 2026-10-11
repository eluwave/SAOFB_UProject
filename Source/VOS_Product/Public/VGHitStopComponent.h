#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGHitStopComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVGHitStopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVGHitStopComponent(const FObjectInitializer& ObjectInitializer);

};

