#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Misc/StringClassReference.h"
#include "Engine/NetSerialization.h"
#include "EVGWeaponHandType.h"
#include "VGActionResource.h"
#include "VGActionResourceWeapon.h"
#include "VGBattleCharacter.h"
#include "VGBeaconHitPacket.h"
#include "VGGadgetInstallationPacket.h"
#include "VGGadgetKnifeRemovePacket.h"
#include "VGGadgetKnifeSpawnPacket.h"
#include "VGSkillAreaSpawnPacket.h"
#include "VGSkillBulletRemovePacket.h"
#include "VGStringClassReferences.h"
#include "VGTriggerStateCondition.h"
#include "VGUltimateLauncherAreaSpawnPacket.h"
#include "VGUltimateLauncherRemovePacket.h"
#include "VGUltimateLauncherSecondFirePacket.h"
#include "VGUltimateSniperRemovePacket.h"
#include "VGArmed.generated.h"

class AVGWeaponActor;
class UChildActorComponent;
class UVGAvatarCustomizeComponent;
class UVGCommandAsset;
class UVGFacialMeshComponent;
class UVGGadgetCamouflage;
class UVGSkillLayer;
class UVGUltimate;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGArmed : public AVGBattleCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeComponent* m_avatar_customize_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringClassReference> m_weapon_classes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponHandType m_weapon_hand_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_weapon_action_required;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_weapon_index_sync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_weapon_index_disarmed_sync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_skill_recast_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> m_skill_layer_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_aim_coef_action_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_reload_coef_action_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTriggerStateCondition> m_parry_action_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_parry_action_type_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_override_skill_action_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_ultimate_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_good_action_limit_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_good_action_probability;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UChildActorComponent*> m_weapon_actor_components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGActionResourceWeapon> m_action_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FVGStringClassReferences> m_weapon_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVGActionResource m_action_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGSkillLayer* m_skill_layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGUltimate* m_ultimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGadgetCamouflage* m_gadget_camo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGFacialMeshComponent* m_facial_mesh;
    
public:
    AVGArmed(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNavModifierVolumeEnable(bool flag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UltimateSniperRemove(FVGUltimateSniperRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UltimateLauncherSecondFire(FVGUltimateLauncherSecondFirePacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UltimateLauncherRemove(FVGUltimateLauncherRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UltimateLauncherAreaSpawn(FVGUltimateLauncherAreaSpawnPacket packet);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StartSkill(int8 layer_id, int8 slot_id);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SkillBulletRemove(FVGSkillBulletRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SkillAreaSpawn(FVGSkillAreaSpawnPacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GadgetKnifeSpawn(FVGGadgetKnifeSpawnPacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GadgetKnifeRemove(FVGGadgetKnifeRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GadgetInstallation(FVGGadgetInstallationPacket packet);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_FireWeapon(int8 weapon_id, uint8 Option, uint16 bullet_id, FVector_NetQuantize Position, FVector_NetQuantizeNormal Direction, float delta_time);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EndSkill();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_BulletExplode(int8 weapon_id, uint8 Option, FVector_NetQuantize Position, FVector_NetQuantizeNormal Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BeaconHit(FVGBeaconHitPacket packet);
    
    UFUNCTION(BlueprintCallable)
    void ReserveAction(int32 action_id);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_UltimateSniperRemove(FVGUltimateSniperRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_UltimateLauncherSecondFire(FVGUltimateLauncherSecondFirePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_UltimateLauncherRemove(FVGUltimateLauncherRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_UltimateLauncherAreaSpawn(FVGUltimateLauncherAreaSpawnPacket packet);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_StartSkill(int8 layer_id, int8 slot_id);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SkillBulletRemove(FVGSkillBulletRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SkillAreaSpawn(FVGSkillAreaSpawnPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_GadgetKnifeSpawn(FVGGadgetKnifeSpawnPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_GadgetKnifeRemove(FVGGadgetKnifeRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_GadgetInstallation(FVGGadgetInstallationPacket packet);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_FireWeapon(int8 weapon_id, uint8 Option, uint16 bullet_id, FVector_NetQuantize Position, FVector_NetQuantizeNormal Direction, float delta_time);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_EndSkill();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_BulletExplode(int8 weapon_id, uint8 Option, FVector_NetQuantize Position, FVector_NetQuantizeNormal Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_BeaconHit(FVGBeaconHitPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UltimateSniperRemove(FVGUltimateSniperRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UltimateLauncherSecondFire(FVGUltimateLauncherSecondFirePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UltimateLauncherRemove(FVGUltimateLauncherRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UltimateLauncherAreaSpawn(FVGUltimateLauncherAreaSpawnPacket packet);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartSkill(int8 layer_id, int8 slot_id);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SkillBulletRemove(FVGSkillBulletRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SkillAreaSpawn(FVGSkillAreaSpawnPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_GadgetKnifeSpawn(FVGGadgetKnifeSpawnPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_GadgetKnifeRemove(FVGGadgetKnifeRemovePacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_GadgetInstallation(FVGGadgetInstallationPacket packet);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_FireWeapon(int8 weapon_id, uint8 Option, uint16 bullet_id, FVector_NetQuantize Position, FVector_NetQuantizeNormal Direction, float delta_time);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EndSkill();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_BulletExplode(int8 weapon_id, uint8 Option, FVector_NetQuantize Position, FVector_NetQuantizeNormal Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BeaconHit(FVGBeaconHitPacket packet);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddWeaponMastery(int8 chara_unique, int8 division, int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGadgetCamouflage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedWalkBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedRunBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedKneelingBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedJogBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedFiringWalkBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedBackWalkBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedBackJogBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedADSWalkBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGWeaponActor* GetCurrentWeapon() const;
    
};

