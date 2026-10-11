#pragma once
#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "EVGAINoiseType.h"
#include "EVGBattleTalkTrigger.h"
#include "EVGCharaUnique.h"
#include "EVGDodgeAction.h"
#include "EVGMapIconType.h"
#include "EVGPassiveSkill.h"
#include "VGAINoiseInfo.h"
#include "VGBattleBlueprintLibrary.generated.h"

class AActor;
class AVGAITeam;
class AVGAITeamManager;
class AVGBattleCharacter;
class AVGDropItemManager;
class AVGDungeon;
class AVGWeaponActor;
class UObject;
class UVGAIUnit;
class UVGBattleHUDWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBattleBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVGBattleBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerInvincible(UObject* Context, bool value);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestPlayerBattleTalk(EVGBattleTalkTrigger trigger_id, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RequestDodgeAction(EVGDodgeAction action, int32 Target, float Duration, AActor* Actor, float Radius, float probability);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestBattleTalk(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* main_character, AVGBattleCharacter* target_character);
    
    UFUNCTION(BlueprintCallable)
    static void ReportAINoiseEvents(const TArray<FVGAINoiseInfo>& noiseArray, const FVector& Location, EVGAINoiseType weaponType, AActor* sourceActor, float LoudnessScale);
    
    UFUNCTION(BlueprintCallable)
    static void ReportAINoiseEvent(UObject* Context, const FVector& Location, EVGAINoiseType Type, float Loudness, AActor* sourceActor, float Radius, FName tag);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceProjectile2(UObject* Context, FHitResult& HitResult, const FVector& sourceLocation, const FVector& TargetLocation, float Speed, float Gravity, TEnumAsByte<ECollisionChannel> TraceChannel, const TArray<AActor*>& ignoreActors, float angleLimitCos, bool upperAngle);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceProjectile(UObject* Context, FHitResult& HitResult, const FVector& sourceLocation, const FVector& TargetLocation, float Speed, float Gravity, TEnumAsByte<ECollisionChannel> TraceChannel, const AActor* ignoreActor, float angleLimitCos, bool upperAngle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSpecifiedBattle(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool IsProjectileHit(const FVector& Start, const FVector& Target, const FVector& Velocity, float Gravity, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerTeamDefeated(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNavMeshGenerating(UObject* Context, bool checkGenerating, bool includePendingUpdate, bool checkUpdateFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocalSpectator(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLastManStanding(UObject* Context, bool& result);
    
    UFUNCTION(BlueprintCallable)
    static void IsInMultiplayBelligerentEnemy(UObject* Context, bool& is_belligerent_enemy);
    
    UFUNCTION(BlueprintCallable)
    static void IsInBelligerentBoss(UObject* Context, bool& is_belligerent_boss, bool& is_belligerent_nm);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInBelligerent(UObject* Context, float& reliability, float& top_damaged, EVGMapIconType target_type);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnemyOfPlayer(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool GetProjectileVelocity(FVector& Velocity, const FVector& sourceLocation, const FVector& TargetLocation, float hitTime, float Gravity);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetProjectileSinCos2(float& sn0, float& cs0, float& sn1, float& cs1, const FVector& sourceLocation, const FVector& TargetLocation, float Speed, float Gravity);
    
    UFUNCTION(BlueprintCallable)
    static bool GetProjectileSinCos(float& sn, float& cs, const FVector& sourceLocation, const FVector& TargetLocation, float Speed, float Gravity);
    
    UFUNCTION(BlueprintCallable)
    static float GetProjectileAngle(const FVector& Start, const FVector& Target, float Speed, float Gravity);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetModifiedAINoiseType(EVGAINoiseType Type, EVGAINoiseType weaponType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetDungeonLocation(UObject* Context, const FVector& Location, bool lineTrace);
    
    UFUNCTION(BlueprintCallable)
    static AVGDungeon* GetDungeon(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static AVGDropItemManager* GetDropItemManager(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static float GetCharaPassiveSkillValue(UObject* Context, AVGBattleCharacter* Actor, EVGCharaUnique ID, EVGPassiveSkill Type);
    
    UFUNCTION(BlueprintCallable)
    static UVGBattleHUDWidget* GetBattleHUDWidget(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UVGAIUnit* GetAIUnit(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AVGAITeamManager* GetAITeamManager(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static AVGAITeam* GetAITeamByName(UObject* Context, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static AVGAITeam* GetAITeam(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static EVGAINoiseType GetAINoiseType(EVGAINoiseType Type, const AVGWeaponActor* weapon);
    
    UFUNCTION(BlueprintCallable)
    static void CharacterActionResume(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void CharacterActionPause(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeSeenFromChara(AVGBattleCharacter* Player, AVGBattleCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    static void BattleResume(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void BattlePauseNoHide(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void BattlePause(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleIsPaused(UObject* Context);
    
};

