#pragma once
#include "CoreMinimal.h"
#include "VGGameEventBase.h"
#include "VGGameEventEnemySpawnParam.h"
#include "VGGameEventEnemySpawnEvent.generated.h"

class AActor;
class AVGAITeam;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGameEventEnemySpawnEvent : public UVGGameEventBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAITeam* m_spawned_enemy_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGAITeam*> m_map_enemy_teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_spawned_actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventEnemySpawnParam m_param;
    
public:
    UVGGameEventEnemySpawnEvent();

protected:
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTeamExterminated(AVGAITeam* Team);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnTeamCreated(AVGAITeam* Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGAITeam* GetOwnTeam();
    
};

