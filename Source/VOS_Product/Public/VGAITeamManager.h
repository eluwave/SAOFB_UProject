#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "EVGTeamCategory.h"
#include "EVGTeamRelation.h"
#include "OnTeamAddedDelegate.h"
#include "VGRandomSpawnTeam.h"
#include "VGAITeamManager.generated.h"

class AVGAIDefenceBossTeam;
class AVGAIFriendBossTeam;
class AVGAISpawner;
class AVGAITeam;
class AVGTeamAnnihilatedChecker;
class UVGAIUnit;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAITeamManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamAdded OnTeamAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGTeamAnnihilatedChecker*> m_team_annihilated_checker_list;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_leader_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_base_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_enemy_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRandomSpawnTeam> m_random_spawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGAITeam*> m_team_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGAITeam*> m_random_team_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGAIUnit*> m_discovered_unit_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGAITeam*> m_spawn_team_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAIDefenceBossTeam* m_defence_boss_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAIFriendBossTeam* m_friend_boss_team;
    
public:
    AVGAITeamManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AVGAITeam*> GetTeams() const;
    
    UFUNCTION(BlueprintCallable)
    static EVGTeamRelation GetTeamRelationFromPlayer_Default(const AVGAITeam* targetTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGTeamRelation GetTeamRelationFromPlayer(const AVGAITeam* targetTeam) const;
    
    UFUNCTION(BlueprintCallable)
    static EVGTeamRelation GetTeamRelation_Default(const AVGAITeam* Team, const AVGAITeam* targetTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGTeamRelation GetTeamRelation(const AVGAITeam* Team, const AVGAITeam* targetTeam) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTeamBySpawner(AVGAITeam*& Team, AVGAISpawner* spawner);
    
    UFUNCTION(BlueprintCallable)
    void GetTeamByRelation(TArray<AVGAITeam*>& teams, AVGAITeam* baseTeam, const TArray<EVGTeamRelation>& relations);
    
    UFUNCTION(BlueprintCallable)
    void GetTeamByName(AVGAITeam*& Team, const FName& teamName);
    
    UFUNCTION(BlueprintCallable)
    void GetTeamByActor(AVGAITeam*& Team, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerTeams(TArray<AVGAITeam*>& teams);
    
    UFUNCTION(BlueprintCallable)
    void GetNearestTeam(AVGAITeam*& Team, const FVector& Position, bool enablePrivateTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeaderDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefenceDistance() const;
    
    UFUNCTION(BlueprintCallable)
    void DiffuseSkillHate(const UVGAIUnit* sourceUnit, float baseHate, float Radius);
    
    UFUNCTION(BlueprintCallable)
    AVGAITeam* CreateTeam(const FName& teamName, const FVector& Position, EVGTeamCategory Category, bool privateTeam, UClass* teamClass, bool tickActivate);
    
    UFUNCTION(BlueprintCallable)
    bool AddTeam(AVGAITeam* newTeam, bool ignoreWeight, bool tickActivate);
    
    UFUNCTION(BlueprintCallable)
    void AddDiscoveredUnit(UVGAIUnit* discoveredUnit);
    
};

