#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"

#include "Misc/StringClassReference.h"

#include "Engine/NetSerialization.h"
#include "EVGBattleTalkTrigger.h"
#include "EVGCharaRole.h"
#include "EVGLock.h"
#include "EVGPassiveSkill.h"
#include "EVGStatusAilment.h"
#include "EVGStatusBuff.h"
#include "EVGStatusBuffOp.h"
#include "Templates/SubclassOf.h"
#include "VGBasicStatus.h"
#include "VGCharacter.h"
#include "VGDamageCameraShake.h"
#include "VGDamagePacket.h"
#include "VGDamageReactionPacket.h"
#include "VGSensing.h"
#include "VGBattleCharacter.generated.h"

class AVGAITeam;
class AVGBattleCharacter;
class UDataTable;
class UVG3DHudDeadIconComponent;
class UVG3DHudMarkerComponent;
class UVG3DHudStatusComponent;
class UVGBattleTalkCharacter;
class UVGCharacterCalcComponent;
class UVGCharacterHit;
class UVGCommandAsset;
class UVGDamageReaction;
class UVGDeadReaction;
class UVGHitStopComponent;
class UVGPassiveSkillComponent;
class UVGStatusAilmentComponent;
class UVGStatusBuffComponent;

UCLASS(Abstract, Blueprintable)
class VOS_PRODUCT_API AVGBattleCharacter : public AVGCharacter, public IAISightTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_status_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGBasicStatus k_status_add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_health_max_add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_health_recover_add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_respawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_respawnable_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_auto_respawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_auto_respawn_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_respawn_action_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCharacterCalcComponent> m_calc_component_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_resuscitable_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_back_jog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_ads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_firing_interp_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_flying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterHit* m_character_hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_damage_reaction_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_dead_reaction_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDamageCameraShake> m_damage_camera_shake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVG3DHudStatusComponent* m_hud_status_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVG3DHudMarkerComponent* m_hud_marker_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVG3DHudDeadIconComponent* m_hud_dead_icon_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_ailment_component_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_buff_component_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_limit_idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_limit_kneeling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_limit_jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_limit_pitch_u;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_limit_pitch_d;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName k_aim_base_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName k_aim_muzzle_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector k_aim_base_up_vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_brendspace_leap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aim_homing_rate_default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_aim_check_only_forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSensing m_sensing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> m_good_action_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ai_head_node_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ai_sight_node_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ai_aim_node_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ai_aim_target_node_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ai_eqs_offset_z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleTalkCharacter* m_battle_talk_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterCalcComponent* m_calc_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHitStopComponent* m_hitstop_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGStatusAilmentComponent* m_ailment_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGStatusBuffComponent* m_buff_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPassiveSkillComponent* m_passive_skill_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGDamageReaction* m_damage_reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGDeadReaction* m_dead_reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AITeam, meta=(AllowPrivateAccess=true))
    AVGAITeam* m_ai_team;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_AISpec, meta=(AllowPrivateAccess=true))
    uint32 m_ai_spec;
    
public:
    AVGBattleCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsWarp(bool is_warp);
    
    UFUNCTION(BlueprintCallable)
    void SetActorSensedBoneNameOnSight(const TArray<FName>& bone_name);
    
    UFUNCTION(BlueprintCallable)
    void SetActorSensedBoneIdOnSight(const TArray<int32>& bone_id);
    
    UFUNCTION(BlueprintCallable)
    void SetActorEyesBoneName(FName bone_name);
    
    UFUNCTION(BlueprintCallable)
    void SetActorEyesBoneId(int32 bone_id);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAimedBoneName(const TArray<FName>& bone_name);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAimedBoneId(const TArray<int32>& bone_id);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAimBoneName(FName bone_name);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAimBoneId(int32 bone_id);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAimAccuracy(float value);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_TalkRequest_Unreliable(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TalkRequest_Reliable(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendLockCharacter(bool result, int32 unique_id, FName lock_node, EVGLock Type);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendGadgetDamage(int32 unique_id, int16 skill_id);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendDamageReaction(FVGDamageReactionPacket packet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendDamage(FVGDamagePacket packet);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendCharacterHitBreak(int8 hit_id);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendAilmentRecoverSpontaneously(int8 Type);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendAilmentRecover(int32 unique_id, int8 Type, int16 skill_id);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendAddHealth(int32 unique_id, float add_health, int16 skill_id);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendAddBuff(int32 unique_id, int8 Type, int8 Op, float value, float Time);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Resurrect(int32 Target);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Respawn(bool is_resurrect);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestSendTeam(AVGBattleCharacter* receiver, AVGBattleCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestDropItem(const AVGBattleCharacter* dropCharacter, bool useUFG, FName partsName, FVector dropPosition);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_ReportAim(FVector_NetQuantize Position, FVector_NetQuantize interest, FVector_NetQuantize100 Target, int32 target_chara_id);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnResurrected(int32 savior);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AchievedGoodAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetCameraPosition();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorSensedBoneNameOnSight(FName bone_name);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorSensedBoneIdOnSight(int32 bone_id);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorAimedBoneName(FName bone_name);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorAimedBoneId(int32 bone_id);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AITeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AISpec();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SendLockCharacter(bool result, int32 unique_id, FName lock_node, EVGLock Type);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_SendGadgetDamage(int32 unique_id, int16 skill_id);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SendDamageReaction(FVGDamageReactionPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SendDamage(FVGDamagePacket packet);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_SendCharacterHitBreak(int8 hit_id);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_SendAilmentRecoverSpontaneously(int8 Type);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_SendAilmentRecover(int32 unique_id, int8 Type, int16 skill_id);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_SendAddHealth(int32 unique_id, float add_health, int16 skill_id);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSimulated_SendAddBuff(int32 unique_id, int8 Type, int8 Op, float value, float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_Resurrect(int32 Target);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_Respawn(bool is_resurrect);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSimulated_ReportAim(FVector_NetQuantize Position, FVector_NetQuantize interest, FVector_NetQuantize100 Target, int32 target_chara_id);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_OnResurrected(int32 savior);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_AchievedGoodAction();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_TalkRequest_Unreliable(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TalkRequest_Reliable(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* target_character, AVGBattleCharacter* ignore_player);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetUFGItemDropEnable(bool flag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTeam(AVGBattleCharacter* Character, AVGAITeam* Team);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendTryLocked(int32 unique_id, FName lock_node, EVGLock Type);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendLockCharacter(bool result, int32 unique_id, FName lock_node, EVGLock Type);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendLastStandLocation(FVector_NetQuantize Position);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendGadgetDamage(int32 unique_id, int16 skill_id);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendDamageReaction(FVGDamageReactionPacket packet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendDamage(FVGDamagePacket packet);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendCharacterHitBreak(int8 hit_id);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendAilmentRecoverSpontaneously(int8 Type);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendAilmentRecover(int32 unique_id, int8 Type, int16 skill_id);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendAddHealth(int32 unique_id, float add_health, int16 skill_id);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendAddBuff(int32 unique_id, int8 Type, int8 Op, float value, float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Resurrect(int32 Target);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Respawn(bool is_resurrect);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_ReportAim(FVector_NetQuantize Position, FVector_NetQuantize interest, FVector_NetQuantize100 Target, int32 target_chara_id);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnResurrected(int32 savior);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AchievedGoodAction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRetired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameOver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuffValid(EVGStatusBuff Type, EVGStatusBuffOp Op) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAilment(EVGStatusAilment Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPassiveSkill(EVGPassiveSkill Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedFlyingBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedFiringWalkBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedBackWalkBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedBackJogBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedADSWalkBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerUnarmed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerMelee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerGadget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerCloseRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPassiveSkillValue(EVGPassiveSkill Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPassiveSkillCoef(EVGPassiveSkill Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpticalRangeBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastStandLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsWarp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHearingRangeBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRecoverBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRecoverAdd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthMaxBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthMaxAdd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEyesightRangeBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipStatusVIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipStatusSTR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipStatusLUK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipStatusINT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipStatusDEX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipStatusAGI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGCharaRole GetCharaRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuffValue(EVGStatusBuff Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusVIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusSTR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusLUK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusINT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusDEX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusAGI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusVIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusSTR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusLUK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusINT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusDEX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusAGI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAlterStatusVIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAlterStatusSTR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAlterStatusLUK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAlterStatusINT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAlterStatusDEX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAlterStatusAGI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlterRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAimPosition(FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAimInterest(FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorEqsOffsetHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorAimPosition(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorAimedPosition(TArray<FVector>& outLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorAimedBoneId(TArray<int32>& outBoneId) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearActorSensedBoneNameOnSight();
    
    UFUNCTION(BlueprintCallable)
    void ClearActorAimedBoneName();
    
    UFUNCTION(BlueprintCallable)
    void AddActorSensedBoneNameOnSight(FName bone_name);
    
    UFUNCTION(BlueprintCallable)
    void AddActorSensedBoneIdOnSight(int32 bone_id);
    
    UFUNCTION(BlueprintCallable)
    void AddActorAimedBoneName(FName bone_name);
    
    UFUNCTION(BlueprintCallable)
    void AddActorAimedBoneId(int32 bone_id);
    

    // Fix for true pure virtual functions not being implemented
};

