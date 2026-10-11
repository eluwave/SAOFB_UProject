#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/NetSerialization.h"
#include "EVGCharaGender.h"
#include "EVGCharaTeam.h"
#include "EVGCharaType.h"
#include "EVGCharaUnique.h"
#include "EVGGameType.h"
#include "Templates/SubclassOf.h"
#include "VGExtraActionCoeff.h"
#include "VGExtraActionDesc.h"
#include "VGRequestToLeaveInterface.h"
#include "VGVfxSignalDesc.h"
#include "VGCharacter.generated.h"

class UChildActorComponent;
class USoundAtomCueSheet;
class UVGActionComponent;
class UVGActionLibrary;
class UVGBehaviorComponent;
class UVGCameraComponent;
class UVGCommandAsset;
class UVGMapIconComponent;
class UVGQuestComponent;
class UVGSoundComponent;
class UVGStateMachine;
class UVGTriggerComponent;
class UVGTriggerLibrary;
class UVGVfxComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCharacter : public ACharacter, public IVGRequestToLeaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGStateMachine> m_state_machine_class;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_state_base_action_ids[14];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGActionLibrary* m_common_action_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTriggerLibrary* m_common_triger_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGExtraActionDesc> m_extra_action_descs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName k_name_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaType m_chara_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_chara_unique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender m_chara_gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVGGameType m_game_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniqueId, meta=(AllowPrivateAccess=true))
    int32 m_unique_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString m_unique_code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaTeam m_team_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_chara_voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_chara_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGBehaviorComponent* m_behavior_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGActionComponent* m_action_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTriggerComponent* m_trigger_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCameraComponent* m_camera_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMapIconComponent* m_map_icon_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGQuestComponent* m_quest_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGVfxComponent* m_vfx_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* m_camera_actor_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_fov_y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_fov_y_run;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_fov_y_air;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_fov_y_ads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_fov_y_lerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_fov_y_lerp_ads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_distance_unarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_distance_melee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_distance_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_distance_lerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_interp_rate_unarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_interp_rate_melee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_interp_rate_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_interp_diff_unarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_interp_diff_melee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_interp_diff_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_side_rotation_unarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_side_rotation_melee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_side_rotation_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_side_rotation_limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_pitch_upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_pitch_lower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_camera_reset_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool k_is_invalid_culling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_culling_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_jog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_run;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_kneeling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_blend_time_walk_jog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_rotation_degree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_accepting_server_move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_refusing_server_move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCommandAsset*> m_change_run_mode_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_pitch_change_min_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_pitch_change_max_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_pitch_change_min_pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_pitch_change_max_pitch;
    
public:
    AVGCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartExtraActionMode(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamId(EVGCharaTeam team_id);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayable(bool is_playable);
    
    UFUNCTION(BlueprintCallable)
    void SetNamedCharacter(bool enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBounty(bool enable);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SendRotationYaw(float degree);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_AddMovementInput(FVector_NetQuantizeNormal Direction, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void ReserveAction(int32 action_id);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UniqueId();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetExtraActionMode(int32 index);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsNamedCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalUser() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBounty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGCharaTeam GetTeamId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedWalkBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedRunBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedKneelingBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedJogBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtraActionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGExtraActionCoeff GetExtraActionCoeff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGCharaType GetCharaType() const;
    
    UFUNCTION(BlueprintCallable)
    void EndExtraActionMode();
    
    UFUNCTION(BlueprintCallable)
    void DeleteEffect(FName signal_name);
    
    UFUNCTION(BlueprintCallable)
    void CreateEffect(const FVGVfxSignalDesc& desc);
    

    // Fix for true pure virtual functions not being implemented
};

