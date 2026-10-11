#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVGTeamCategory.h"
#include "EVGTeamCommand.h"
#include "EVGTeamPathFindingGroup.h"
#include "EVGTeamRule.h"
#include "EVGTeamSpawnType.h"
#include "OnTeamExterminatedDelegate.h"
#include "OnTeamSpawnedDelegate.h"
#include "VGAITeamPerceptionUnitInfo.h"
#include "VGAITeamUnit.h"
#include "VGAITeam.generated.h"

class AVGAISpawner;
class AVGBattleCharacter;
class UVGAIUnit;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAITeam : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamSpawned OnTeamSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamExterminated OnTeamExterminated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_team_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_team_enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_appearance_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTeamSpawnType m_spawn_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawn_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_delete_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_respawn_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_respawn_times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_item_drop_times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_team_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Category, meta=(AllowPrivateAccess=true))
    EVGTeamCategory m_team_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EVGTeamRule m_team_rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTeamPathFindingGroup m_pathfinding_group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_ressurectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_home_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_leader_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_leader_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGAIUnit*> m_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGAITeamPerceptionUnitInfo> m_perception_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_player_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGAITeamUnit> m_team_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* m_player_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGAIUnit*> m_respawn_unit;
    
public:
    AVGAITeam(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    int32 SpawnActorAll();
    
    UFUNCTION(BlueprintCallable)
    void SetTeamRule(const EVGTeamRule Rule);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamCommand(const EVGTeamCommand Command, UVGAIUnit* leaderUnit, bool is_voice);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnType(const EVGTeamSpawnType spawnType);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetDeleteFlag();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetCategory(EVGTeamCategory newCategory);
    
    UFUNCTION(BlueprintCallable)
    void RegistTeam();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Category();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRescueEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoveryEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTeam() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPerceptionByUnit(const UVGAIUnit* unit);
    
    UFUNCTION(BlueprintCallable)
    bool IsPerceptionByActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHumanRessurectable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExterminated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuffEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackEnable() const;
    
    UFUNCTION(BlueprintCallable)
    void GetUnitBySpawner(const AVGAISpawner* spawner, UVGAIUnit*& unit);
    
    UFUNCTION(BlueprintCallable)
    void GetUnitByActor(const AActor* Actor, UVGAIUnit*& unit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnit(TArray<UVGAIUnit*>& unit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGTeamRule GetTeamRule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeamLeaderDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGAIUnit* GetTeamLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeamCommand(EVGTeamCommand& Command, UVGAIUnit*& leaderUnit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpawnType(EVGTeamSpawnType& spawnType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRescuePriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecoveryPriority() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPerceptionUnitByIndex(UVGAIUnit*& unit, int32 index);
    
    UFUNCTION(BlueprintCallable)
    void GetPerceptionByUnit(FVGAITeamPerceptionUnitInfo& perceptionUnit, const UVGAIUnit* unit);
    
    UFUNCTION(BlueprintCallable)
    void GetPerceptionByIndex(FVGAITeamPerceptionUnitInfo& perceptionUnit, int32 index);
    
    UFUNCTION(BlueprintCallable)
    void GetPerception(TArray<FVGAITeamPerceptionUnitInfo>& perceptionUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetName(FName& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHomeDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuffPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackPriority() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearUnit();
    
    UFUNCTION(BlueprintCallable)
    UVGAIUnit* AddUnit(AVGAISpawner* spawner, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddSpawner(AVGAISpawner* spawner);
    
    UFUNCTION(BlueprintCallable)
    UVGAIUnit* AddActor(AActor* Actor, UClass* unitClass);
    
};

