#include "VGBattleBlueprintLibrary.h"

UVGBattleBlueprintLibrary::UVGBattleBlueprintLibrary() {
}

void UVGBattleBlueprintLibrary::SetPlayerInvincible(UObject* Context, bool value) {
}

bool UVGBattleBlueprintLibrary::RequestPlayerBattleTalk(EVGBattleTalkTrigger trigger_id, UObject* Context) {
    return false;
}

void UVGBattleBlueprintLibrary::RequestDodgeAction(EVGDodgeAction action, int32 Target, float Duration, AActor* Actor, float Radius, float probability) {
}

bool UVGBattleBlueprintLibrary::RequestBattleTalk(EVGBattleTalkTrigger trigger_id, AVGBattleCharacter* main_character, AVGBattleCharacter* target_character) {
    return false;
}

void UVGBattleBlueprintLibrary::ReportAINoiseEvents(const TArray<FVGAINoiseInfo>& noiseArray, const FVector& Location, EVGAINoiseType weaponType, AActor* sourceActor, float LoudnessScale) {
}

void UVGBattleBlueprintLibrary::ReportAINoiseEvent(UObject* Context, const FVector& Location, EVGAINoiseType Type, float Loudness, AActor* sourceActor, float Radius, FName tag) {
}

bool UVGBattleBlueprintLibrary::LineTraceProjectile2(UObject* Context, FHitResult& HitResult, const FVector& sourceLocation, const FVector& TargetLocation, float Speed, float Gravity, TEnumAsByte<ECollisionChannel> TraceChannel, const TArray<AActor*>& ignoreActors, float angleLimitCos, bool upperAngle) {
    return false;
}

bool UVGBattleBlueprintLibrary::LineTraceProjectile(UObject* Context, FHitResult& HitResult, const FVector& sourceLocation, const FVector& TargetLocation, float Speed, float Gravity, TEnumAsByte<ECollisionChannel> TraceChannel, const AActor* ignoreActor, float angleLimitCos, bool upperAngle) {
    return false;
}

bool UVGBattleBlueprintLibrary::IsSpecifiedBattle(UObject* Context) {
    return false;
}

bool UVGBattleBlueprintLibrary::IsProjectileHit(const FVector& Start, const FVector& Target, const FVector& Velocity, float Gravity, float Radius) {
    return false;
}

bool UVGBattleBlueprintLibrary::IsPlayerTeamDefeated(UObject* Context) {
    return false;
}

bool UVGBattleBlueprintLibrary::IsNavMeshGenerating(UObject* Context, bool checkGenerating, bool includePendingUpdate, bool checkUpdateFlags) {
    return false;
}

bool UVGBattleBlueprintLibrary::IsLocalSpectator(UObject* Context) {
    return false;
}

bool UVGBattleBlueprintLibrary::IsLastManStanding(UObject* Context, bool& result) {
    return false;
}

void UVGBattleBlueprintLibrary::IsInMultiplayBelligerentEnemy(UObject* Context, bool& is_belligerent_enemy) {
}

void UVGBattleBlueprintLibrary::IsInBelligerentBoss(UObject* Context, bool& is_belligerent_boss, bool& is_belligerent_nm) {
}

bool UVGBattleBlueprintLibrary::IsInBelligerent(UObject* Context, float& reliability, float& top_damaged, EVGMapIconType target_type) {
    return false;
}

bool UVGBattleBlueprintLibrary::IsEnemyOfPlayer(AActor* Actor) {
    return false;
}

bool UVGBattleBlueprintLibrary::GetProjectileVelocity(FVector& Velocity, const FVector& sourceLocation, const FVector& TargetLocation, float hitTime, float Gravity) {
    return false;
}

int32 UVGBattleBlueprintLibrary::GetProjectileSinCos2(float& sn0, float& cs0, float& sn1, float& cs1, const FVector& sourceLocation, const FVector& TargetLocation, float Speed, float Gravity) {
    return 0;
}

bool UVGBattleBlueprintLibrary::GetProjectileSinCos(float& sn, float& cs, const FVector& sourceLocation, const FVector& TargetLocation, float Speed, float Gravity) {
    return false;
}

float UVGBattleBlueprintLibrary::GetProjectileAngle(const FVector& Start, const FVector& Target, float Speed, float Gravity) {
    return 0.0f;
}

int32 UVGBattleBlueprintLibrary::GetModifiedAINoiseType(EVGAINoiseType Type, EVGAINoiseType weaponType) {
    return 0;
}

FVector UVGBattleBlueprintLibrary::GetDungeonLocation(UObject* Context, const FVector& Location, bool lineTrace) {
    return FVector{};
}

AVGDungeon* UVGBattleBlueprintLibrary::GetDungeon(UObject* Context) {
    return NULL;
}

AVGDropItemManager* UVGBattleBlueprintLibrary::GetDropItemManager(UObject* Context) {
    return NULL;
}

float UVGBattleBlueprintLibrary::GetCharaPassiveSkillValue(UObject* Context, AVGBattleCharacter* Actor, EVGCharaUnique ID, EVGPassiveSkill Type) {
    return 0.0f;
}

UVGBattleHUDWidget* UVGBattleBlueprintLibrary::GetBattleHUDWidget(UObject* Context) {
    return NULL;
}

UVGAIUnit* UVGBattleBlueprintLibrary::GetAIUnit(AActor* Actor) {
    return NULL;
}

AVGAITeamManager* UVGBattleBlueprintLibrary::GetAITeamManager(UObject* Context) {
    return NULL;
}

AVGAITeam* UVGBattleBlueprintLibrary::GetAITeamByName(UObject* Context, const FName& Name) {
    return NULL;
}

AVGAITeam* UVGBattleBlueprintLibrary::GetAITeam(AActor* Actor) {
    return NULL;
}

EVGAINoiseType UVGBattleBlueprintLibrary::GetAINoiseType(EVGAINoiseType Type, const AVGWeaponActor* weapon) {
    return EVGAINoiseType::Hearing;
}

void UVGBattleBlueprintLibrary::CharacterActionResume(UObject* Context) {
}

void UVGBattleBlueprintLibrary::CharacterActionPause(UObject* Context) {
}

bool UVGBattleBlueprintLibrary::CanBeSeenFromChara(AVGBattleCharacter* Player, AVGBattleCharacter* Target) {
    return false;
}

void UVGBattleBlueprintLibrary::BattleResume(UObject* Context) {
}

void UVGBattleBlueprintLibrary::BattlePauseNoHide(UObject* Context) {
}

void UVGBattleBlueprintLibrary::BattlePause(UObject* Context) {
}

bool UVGBattleBlueprintLibrary::BattleIsPaused(UObject* Context) {
    return false;
}

