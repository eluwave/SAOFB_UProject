#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGSummonEnergy.generated.h"

class AVGAISpawnMediator;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSummonEnergy : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gauge_max;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAISpawnMediator* m_spawn_mediator;
    
public:
    AVGSummonEnergy(const FObjectInitializer& ObjectInitializer);

};

