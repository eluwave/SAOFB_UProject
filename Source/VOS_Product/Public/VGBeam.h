#pragma once
#include "CoreMinimal.h"

#include "VGProjectileActor.h"
#include "VGBeam.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBeam : public AVGProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator m_start_rotation;
    
public:
    AVGBeam(const FObjectInitializer& ObjectInitializer);

};

