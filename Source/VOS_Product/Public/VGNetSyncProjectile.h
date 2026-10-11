#pragma once
#include "CoreMinimal.h"
#include "VGHitBox.h"
#include "VGNetSyncProjectileStatePacket.h"
#include "VGRequestToLeaveInterface.h"
#include "VGNetSyncProjectile.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGNetSyncProjectile : public AVGHitBox, public IVGRequestToLeaveInterface {
    GENERATED_BODY()
public:
    AVGNetSyncProjectile(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_State(FVGNetSyncProjectileStatePacket packet);
    

    // Fix for true pure virtual functions not being implemented
};

