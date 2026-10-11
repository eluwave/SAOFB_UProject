#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "Engine/NetSerialization.h"
#include "EVGActionState.h"
#include "EVGAimAssistMode.h"
#include "EVGTeamCommand.h"
#include "VGArmed.h"
#include "VGCharacterHitTolerance.h"
#include "VGItemDropItemPacketItem.h"
#include "VGPlayer.generated.h"

class AVGBattleCharacter;
class AVGDropItem;
class AVGPlayer;
class UChildActorComponent;
class UCurveFloat;
class UVGAimAccuracy;
class UVGCommandAsset;
class UVGPlayerSystemAssist;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGPlayer : public AVGArmed {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ads_action_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGActionState> m_ads_exclude_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGAimAssistMode m_assist_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_aim_assist_correct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_aim_accuracy_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_aim_accuracy_ADS_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aim_accuracy_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aim_calm_MIL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aim_calm_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aim_manual_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_check_depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_reticle_scale_per_MIL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> m_change_assist_mode_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> m_camera_reset_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> m_change_camera_side_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> m_ads_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_wire_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_wire_start_action_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_input_x_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_input_x_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* k_input_curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_view_blocking_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_view_blocking_distance_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 k_reputation_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* m_wall_hit_vfx;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* m_wire_actor_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGPlayerSystemAssist* m_system_assist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAimAccuracy* m_aim_accuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAimAccuracy* m_aim_accuracy_ADS;
    
public:
    AVGPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WireEnd();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendWireState(FVector_NetQuantize10 fire, FVector_NetQuantize10 head);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendWireFire(FVector_NetQuantizeNormal Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendWireEnd();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendSwitchState(int8 ID, bool new_state);
    
    UFUNCTION(BlueprintCallable)
    void RequestTeamCommand(EVGTeamCommand Command, bool is_voice);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PullDropItem(AVGDropItem* DropItem, AVGPlayer* Player, bool unreached);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SendWireState(FVector_NetQuantize10 fire, FVector_NetQuantize10 head);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SendWireFire(FVector_NetQuantizeNormal Direction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SendWireEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendWireState(FVector_NetQuantize10 fire, FVector_NetQuantize10 head);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendWireFire(FVector_NetQuantizeNormal Direction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendWireEnd();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendSwitchState(int8 ID, bool new_state);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CharacterWarp(int8 ID, int32 character_unique_id);
    
    UFUNCTION(BlueprintCallable)
    EVGTeamCommand GetTeamCommand();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void GetDropItems(const TArray<FVGItemDropItemPacketItem>& Items);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void GetDropItem(const FVGItemDropItemPacketItem& packetItem, AVGPlayer* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTolerance(const FVGCharacterHitTolerance& tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageWire(AVGPlayer* attacker, AVGBattleCharacter* Target, float damage_factor, float tolerance, bool is_weak_point) const;
    
};

