#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGCharacterTrackingFogComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVGCharacterTrackingFogComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_fog_actor;
    
public:
    UVGCharacterTrackingFogComponent(const FObjectInitializer& ObjectInitializer);

};

