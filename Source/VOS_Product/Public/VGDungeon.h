#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "VGDungeonConfig.h"
#include "VGDungeonDoor.h"
#include "VGDungeonRoomBase.h"
#include "VGDungeon.generated.h"

class ANavMeshBoundsVolume;
class AVGGimmickPortal;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDungeon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDungeonConfig m_config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Seed, meta=(AllowPrivateAccess=true))
    int32 m_seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_visibility_controll;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_spawn_slice_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGDungeonRoomBase> m_room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGDungeonDoor> m_door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGGimmickPortal* m_warp_portal;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_collision_actor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavMeshBoundsVolume* m_navmesh_actor;
    
public:
    AVGDungeon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnStartPos(const FTransform& Transform, FName tag);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActorFromClass(UClass* Class, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuildFinished_Reliable(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Seed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_WarpCharacter_Reliable(int32 UniqueId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDoorLocked_Reliable(int32 doorID, bool locked);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BuildFinished_Reliable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWarpSearchHeight(const FVector& pos) const;
    
    UFUNCTION(BlueprintCallable)
    float GetRandomF();
    
    UFUNCTION(BlueprintCallable)
    bool GetRandomB(float probability);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandom(int32 bits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBossWarpoutTransform(FTransform& Transform);
    
};

