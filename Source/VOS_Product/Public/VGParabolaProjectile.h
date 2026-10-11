#pragma once
#include "CoreMinimal.h"

#include "VGProjectileActor.h"
#include "VGParabolaProjectile.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGParabolaProjectile : public AVGProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_parabola_velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Landing_offset_distance;
    
public:
    AVGParabolaProjectile(const FObjectInitializer& ObjectInitializer);

};

