#include "VGBlueprintLibrary.h"

UVGBlueprintLibrary::UVGBlueprintLibrary() {
}

void UVGBlueprintLibrary::UnlockAchievement(EVGAchievement ID) {
}

void UVGBlueprintLibrary::Unlock(const FVGCriticalSection& CriticalSection) {
}

void UVGBlueprintLibrary::SyncNavMeshFlags(UObject* Context) {
}

AVGTransitionSupervisor* UVGBlueprintLibrary::SpawnTransitionSupervisor(UObject* Context) {
    return NULL;
}

void UVGBlueprintLibrary::SetViewCameraCutWithDelay(UObject* Context, float DelayTime) {
}

void UVGBlueprintLibrary::SetViewCameraCutParam(float Rotation, float Translation) {
}

void UVGBlueprintLibrary::SetViewCameraCut(UObject* Context) {
}

void UVGBlueprintLibrary::SetupInitialOutfitAbyssDungeon(UObject* Context, EVGCharaUnique ID) {
}

void UVGBlueprintLibrary::SetupInitialOutfit(UObject* Context, EVGCharaUnique ID) {
}

void UVGBlueprintLibrary::SetShowFlagForGameEvent(UObject* Context, bool value) {
}

void UVGBlueprintLibrary::SetProgressFlags(UObject* Context, const TArray<int32>& Indices) {
}

void UVGBlueprintLibrary::SetProgressFlag(UObject* Context, int32 index) {
}

void UVGBlueprintLibrary::SetMultiplayEnabled(UObject* Context, bool value) {
}

void UVGBlueprintLibrary::SetEnableShare(bool is_enable) {
}

void UVGBlueprintLibrary::SetCharacterFacialExpression(AVGCharacter* Target, EVGFacialExpressionPattern pattern, EVGFacialPart part) {
}

void UVGBlueprintLibrary::SetAbyssModeFriendFlags(UObject* Context) {
}

void UVGBlueprintLibrary::SetAbyssCharacterAdmissionRestriction(UObject* Context, EVGCharaUnique Unique, bool value) {
}

void UVGBlueprintLibrary::ResetViewCameraCutParam() {
}

void UVGBlueprintLibrary::ResetProgressFlags(UObject* Context, const TArray<int32>& Indices) {
}

void UVGBlueprintLibrary::ResetProgressFlag(UObject* Context, int32 index) {
}

void UVGBlueprintLibrary::ResetPlayerStatusAbyssDungeon(UObject* Context) {
}

void UVGBlueprintLibrary::ResetPlayerLevelAbyssDungeon(UObject* Context) {
}

void UVGBlueprintLibrary::RequestScreenFade(UObject* Context, const FVGScreenFadeParam& param) {
}

void UVGBlueprintLibrary::ReportPlayerActivity(UObject* Context, EVGPlayerActivityType Type, int32 Count) {
}

void UVGBlueprintLibrary::RemovePartyMember(UObject* Context, EVGCharaUnique ID) {
}

void UVGBlueprintLibrary::RemoveObstacleNavArea(UObject* Context, int32 AreaID, const TArray<FName>& agentProperties) {
}

bool UVGBlueprintLibrary::RemoveItemFromInventoryEntry(UObject* Context, FName ItemId, int32 Num) {
    return false;
}

bool UVGBlueprintLibrary::NotEqual_GameEventContentId(const FVGContentId& A, const FVGContentId& B) {
    return false;
}

void UVGBlueprintLibrary::Lock(const FVGCriticalSection& CriticalSection) {
}

bool UVGBlueprintLibrary::IsTrialMode() {
    return false;
}

bool UVGBlueprintLibrary::IsProgressFlagSetAny(UObject* Context, TArray<int32> Indices) {
    return false;
}

bool UVGBlueprintLibrary::IsProgressFlagSetAll(UObject* Context, TArray<int32> Indices) {
    return false;
}

bool UVGBlueprintLibrary::IsProgressFlagSet(UObject* Context, int32 index) {
    return false;
}

bool UVGBlueprintLibrary::IsPartyMember(UObject* Context, EVGCharaUnique ID) {
    return false;
}

bool UVGBlueprintLibrary::IsMultiplayEnabled(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsKiritoModeEnabled(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsInventoryEntryIdValid(FVGInventoryEntryId ID) {
    return false;
}

bool UVGBlueprintLibrary::IsInPreviewWorld(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsGameEventContentValid(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsCullingsActor(const TArray<FVGCameraFrustum>& cameraFrustum, const AActor* Actor, float farClip) {
    return false;
}

bool UVGBlueprintLibrary::IsCullings(const TArray<FVGCameraFrustum>& cameraFrustum, const FVector& Location, float Radius, float farClip) {
    return false;
}

bool UVGBlueprintLibrary::IsCullingActor(const FVGCameraFrustum& cameraFrustum, const AActor* Actor, float farClip) {
    return false;
}

bool UVGBlueprintLibrary::IsCulling(const FVGCameraFrustum& cameraFrustum, const FVector& Location, float Radius, float farClip) {
    return false;
}

bool UVGBlueprintLibrary::IsChunkInstalled(int32 ChunkId) {
    return false;
}

bool UVGBlueprintLibrary::IsCharacterUnlocked(UObject* Context, EVGCharaUnique Unique) {
    return false;
}

bool UVGBlueprintLibrary::IsCharacterSelectable(UObject* Context, EVGCharaUnique Unique) {
    return false;
}

bool UVGBlueprintLibrary::IsCharacterLibraryUnlocked(UObject* Context, EVGCharaUnique Unique) {
    return false;
}

bool UVGBlueprintLibrary::IsCharacterEnabled(UObject* Context, EVGCharaUnique Unique) {
    return false;
}

bool UVGBlueprintLibrary::IsCharacterBlocked(UObject* Context, EVGCharaUnique Unique) {
    return false;
}

bool UVGBlueprintLibrary::IsBobEventEnabled(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsAutoSaveEnabled(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsAllChunkInstalled() {
    return false;
}

bool UVGBlueprintLibrary::IsAfasysEnable(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsAdditionalContentInstalled(const FString& Content) {
    return false;
}

bool UVGBlueprintLibrary::IsAbyssMode(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsAbyssDungeon(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::IsAbyssCharacterAdmissionRestriction(UObject* Context, EVGCharaUnique Unique) {
    return false;
}

bool UVGBlueprintLibrary::IsAbyssAdmissionRestrictionSituation(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::HasKiritoModeCleared(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::HasGameCleared(UObject* Context) {
    return false;
}

bool UVGBlueprintLibrary::HasCharacterCustomCostume(UObject* Context, EVGCharaUnique Unique) {
    return false;
}

bool UVGBlueprintLibrary::HasAbyssCharacterCustomCostume(UObject* Context, const EVGCharaUnique Unique) {
    return false;
}

UVGSoundManager* UVGBlueprintLibrary::GetSoundManager() {
    return NULL;
}

UVGScreenEffectSupervisor* UVGBlueprintLibrary::GetScreenEffectSupervisor(UObject* Context) {
    return NULL;
}

UVGRoamHUDWidget* UVGBlueprintLibrary::GetRoamHUDWidget(UObject* Context) {
    return NULL;
}

UVGRoamBackHUDWidget* UVGBlueprintLibrary::GetRoamBackHUDWidget(UObject* Context) {
    return NULL;
}

EVGRegion::Type UVGBlueprintLibrary::GetRegion() {
    return EVGRegion::Jp;
}

TArray<EVGCharaUnique> UVGBlueprintLibrary::GetPartyMembers(UObject* Context) {
    return TArray<EVGCharaUnique>();
}

bool UVGBlueprintLibrary::GetOptimalNavLocation(const AAIController* Controller, const FVector& Position, FVector& projectedLocation, const FVector& Extent, const FVector& Vector, bool includeObstacle) {
    return false;
}

int32 UVGBlueprintLibrary::GetMoney(UObject* Context, EVGCharaUnique Unique) {
    return 0;
}

AVGPlayerController* UVGBlueprintLibrary::GetLocalPlayerController(UObject* Context) {
    return NULL;
}

AVGCharacter* UVGBlueprintLibrary::GetLocalPlayerChara(UObject* Context) {
    return NULL;
}

int32 UVGBlueprintLibrary::GetItemNum(UObject* Context, FName ItemId, bool SearchForItemBox) {
    return 0;
}

AVGHUD* UVGBlueprintLibrary::GetHUD(UObject* Context) {
    return NULL;
}

UVGGameViewportClient* UVGBlueprintLibrary::GetGameViewportClient(UObject* Context) {
    return NULL;
}

AVGGameState* UVGBlueprintLibrary::GetGameState(UObject* Context) {
    return NULL;
}

EVGGamePlayMode UVGBlueprintLibrary::GetGameplayMode(UObject* Context) {
    return EVGGamePlayMode::Player;
}

UVGGameInstance* UVGBlueprintLibrary::GetGameInstance(UObject* Context) {
    return NULL;
}

FVGContentId UVGBlueprintLibrary::GetGameEventContentId(UObject* Context) {
    return FVGContentId{};
}

EVGGameDifficulty UVGBlueprintLibrary::GetGameDifficulty(UObject* Context) {
    return EVGGameDifficulty::Easy;
}

FText UVGBlueprintLibrary::GetDisplayCharacterName(UObject* Context, AVGCharacter* Chara) {
    return FText::GetEmpty();
}

int32 UVGBlueprintLibrary::GetCharacterVoiceType(UObject* Context, EVGCharaUnique Unique) {
    return 0;
}

void UVGBlueprintLibrary::GetCharacterPreview(UClass* character_class, USkeletalMesh*& skeletal_mesh, UClass*& anim_class, FVector& Scale) {
}

int32 UVGBlueprintLibrary::GetCharacterLibraryFriendshipRank(UObject* Context, EVGCharaUnique Unique) {
    return 0;
}

int32 UVGBlueprintLibrary::GetCharacterLevelCap() {
    return 0;
}

EVGCharaGender UVGBlueprintLibrary::GetCharacterGender(UObject* Context, EVGCharaUnique Unique) {
    return EVGCharaGender::Male;
}

void UVGBlueprintLibrary::GetCharacterCollision(UClass* character_class, float& capsule_radius, float& capsule_half_height) {
}

int32 UVGBlueprintLibrary::GetBestClearTime(UObject* Context, UVGQuestRecord* record) {
    return 0;
}

int32 UVGBlueprintLibrary::GetBestClearHero(UObject* Context, UVGQuestRecord* record) {
    return 0;
}

int32 UVGBlueprintLibrary::GetAvatarEnemyLevelCap(UObject* Context) {
    return 0;
}

bool UVGBlueprintLibrary::Equal_GameEventContentId(const FVGContentId& A, const FVGContentId& B) {
    return false;
}

void UVGBlueprintLibrary::DrawDebugString(FVector TextLocation, const FString& Text, const AActor* TestBaseActor, FLinearColor TextColor, float Duration) {
}

void UVGBlueprintLibrary::DrawDebugSphere(FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness) {
}

void UVGBlueprintLibrary::DrawDebugPoint(FVector Position, float Size, FLinearColor PointColor, float Duration) {
}

void UVGBlueprintLibrary::DrawDebugLine(FVector LineStart, FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness) {
}

void UVGBlueprintLibrary::DrawDebugCircle(FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool DrawAxis) {
}

void UVGBlueprintLibrary::DrawDebugCapsule(FVector Center, float HalfHeight, float Radius, FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness) {
}

void UVGBlueprintLibrary::DrawDebugBox(FVector Center, FVector Extent, FLinearColor LineColor, FRotator Rotation, float Duration, float Thickness) {
}

void UVGBlueprintLibrary::DrawDebugArrow(FVector LineStart, FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness) {
}

void UVGBlueprintLibrary::ClearObstacleNavArea(UObject* Context, const TArray<FName>& agentProperties) {
}

void UVGBlueprintLibrary::ASyncNavMeshFlags(UObject* Context) {
}

void UVGBlueprintLibrary::AddTalkCount(UObject* Context) {
}

bool UVGBlueprintLibrary::AddStartNavLocation(UObject* Context, const FVector& Position, const TArray<FName>& agentProperties, FName Name) {
    return false;
}

void UVGBlueprintLibrary::AddPartyMember(UObject* Context, EVGCharaUnique ID) {
}

int32 UVGBlueprintLibrary::AddObstacleNavArea(UObject* Context, const FVector& Position, const FVector& Extent, const TArray<FName>& agentProperties) {
    return 0;
}

void UVGBlueprintLibrary::AddMoney(UObject* Context, EVGCharaUnique Unique, int32 amount) {
}

bool UVGBlueprintLibrary::AddItemToInventoryEntry(UObject* Context, FName ItemId, int32 Num) {
    return false;
}

void UVGBlueprintLibrary::AddCharacterReputation(UObject* Context, EVGCharaUnique Unique, int32 value, bool EnableOption) {
}

void UVGBlueprintLibrary::AddAfasysTalkCount(UObject* Context) {
}

