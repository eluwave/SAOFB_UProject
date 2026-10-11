#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGNetSyncProjectileDestroyPacket.h"
#include "VGProjectilePacketComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGProjectilePacketComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_owner;
    
public:
    UVGProjectilePacketComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Destroy(FVGNetSyncProjectileDestroyPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_Destroy(FVGNetSyncProjectileDestroyPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Destroy(FVGNetSyncProjectileDestroyPacket packet);
    
};

