#pragma once
#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVGAchievement.h"
#include "EVGCharaGender.h"
#include "EVGCharaUnique.h"
#include "EVGFacialExpressionPattern.h"
#include "EVGFacialPart.h"
#include "EVGGameDifficulty.h"
#include "EVGGamePlayMode.h"
#include "EVGPlayerActivityType.h"
#include "EVGRegion.h"
#include "VGCameraFrustum.h"
#include "VGContentId.h"
#include "VGCriticalSection.h"
#include "VGInventoryEntryId.h"
#include "VGScreenFadeParam.h"
#include "VGBlueprintLibrary.generated.h"

class AAIController;
class AActor;
class AVGCharacter;
class AVGGameState;
class AVGHUD;
class AVGPlayerController;
class AVGTransitionSupervisor;
class UObject;
class USkeletalMesh;
class UVGGameInstance;
class UVGGameViewportClient;
class UVGQuestRecord;
class UVGRoamBackHUDWidget;
class UVGRoamHUDWidget;
class UVGScreenEffectSupervisor;
class UVGSoundManager;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVGBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnlockAchievement(EVGAchievement ID);
    
    UFUNCTION(BlueprintCallable)
    static void Unlock(const FVGCriticalSection& CriticalSection);
    
    UFUNCTION(BlueprintCallable)
    static void SyncNavMeshFlags(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static AVGTransitionSupervisor* SpawnTransitionSupervisor(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewCameraCutWithDelay(UObject* Context, float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewCameraCutParam(float Rotation, float Translation);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewCameraCut(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void SetupInitialOutfitAbyssDungeon(UObject* Context, EVGCharaUnique ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetupInitialOutfit(UObject* Context, EVGCharaUnique ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetShowFlagForGameEvent(UObject* Context, bool value);
    
    UFUNCTION(BlueprintCallable)
    static void SetProgressFlags(UObject* Context, const TArray<int32>& Indices);
    
    UFUNCTION(BlueprintCallable)
    static void SetProgressFlag(UObject* Context, int32 index);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultiplayEnabled(UObject* Context, bool value);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableShare(bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterFacialExpression(AVGCharacter* Target, EVGFacialExpressionPattern pattern, EVGFacialPart part);
    
    UFUNCTION(BlueprintCallable)
    static void SetAbyssModeFriendFlags(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void SetAbyssCharacterAdmissionRestriction(UObject* Context, EVGCharaUnique Unique, bool value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetViewCameraCutParam();
    
    UFUNCTION(BlueprintCallable)
    static void ResetProgressFlags(UObject* Context, const TArray<int32>& Indices);
    
    UFUNCTION(BlueprintCallable)
    static void ResetProgressFlag(UObject* Context, int32 index);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPlayerStatusAbyssDungeon(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPlayerLevelAbyssDungeon(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RequestScreenFade(UObject* Context, const FVGScreenFadeParam& param);
    
    UFUNCTION(BlueprintCallable)
    static void ReportPlayerActivity(UObject* Context, EVGPlayerActivityType Type, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePartyMember(UObject* Context, EVGCharaUnique ID);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveObstacleNavArea(UObject* Context, int32 AreaID, const TArray<FName>& agentProperties);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveItemFromInventoryEntry(UObject* Context, FName ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_GameEventContentId(const FVGContentId& A, const FVGContentId& B);
    
    UFUNCTION(BlueprintCallable)
    static void Lock(const FVGCriticalSection& CriticalSection);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTrialMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProgressFlagSetAny(UObject* Context, TArray<int32> Indices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProgressFlagSetAll(UObject* Context, TArray<int32> Indices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProgressFlagSet(UObject* Context, int32 index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPartyMember(UObject* Context, EVGCharaUnique ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMultiplayEnabled(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKiritoModeEnabled(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInventoryEntryIdValid(FVGInventoryEntryId ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInPreviewWorld(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameEventContentValid(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCullingsActor(const TArray<FVGCameraFrustum>& cameraFrustum, const AActor* Actor, float farClip);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCullings(const TArray<FVGCameraFrustum>& cameraFrustum, const FVector& Location, float Radius, float farClip);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCullingActor(const FVGCameraFrustum& cameraFrustum, const AActor* Actor, float farClip);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCulling(const FVGCameraFrustum& cameraFrustum, const FVector& Location, float Radius, float farClip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChunkInstalled(int32 ChunkId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterUnlocked(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterSelectable(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterLibraryUnlocked(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterEnabled(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterBlocked(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBobEventEnabled(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAutoSaveEnabled(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllChunkInstalled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAfasysEnable(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAdditionalContentInstalled(const FString& Content);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbyssMode(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbyssDungeon(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbyssCharacterAdmissionRestriction(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbyssAdmissionRestrictionSituation(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasKiritoModeCleared(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasGameCleared(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasCharacterCustomCostume(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAbyssCharacterCustomCostume(UObject* Context, const EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable)
    static UVGSoundManager* GetSoundManager();
    
    UFUNCTION(BlueprintCallable)
    static UVGScreenEffectSupervisor* GetScreenEffectSupervisor(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UVGRoamHUDWidget* GetRoamHUDWidget(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UVGRoamBackHUDWidget* GetRoamBackHUDWidget(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static EVGRegion::Type GetRegion();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EVGCharaUnique> GetPartyMembers(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOptimalNavLocation(const AAIController* Controller, const FVector& Position, FVector& projectedLocation, const FVector& Extent, const FVector& Vector, bool includeObstacle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMoney(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable)
    static AVGPlayerController* GetLocalPlayerController(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static AVGCharacter* GetLocalPlayerChara(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemNum(UObject* Context, FName ItemId, bool SearchForItemBox);
    
    UFUNCTION(BlueprintCallable)
    static AVGHUD* GetHUD(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UVGGameViewportClient* GetGameViewportClient(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static AVGGameState* GetGameState(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static EVGGamePlayMode GetGameplayMode(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UVGGameInstance* GetGameInstance(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVGContentId GetGameEventContentId(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static EVGGameDifficulty GetGameDifficulty(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static FText GetDisplayCharacterName(UObject* Context, AVGCharacter* Chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterVoiceType(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable)
    static void GetCharacterPreview(UClass* character_class, USkeletalMesh*& skeletal_mesh, UClass*& anim_class, FVector& Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterLibraryFriendshipRank(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterLevelCap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EVGCharaGender GetCharacterGender(UObject* Context, EVGCharaUnique Unique);
    
    UFUNCTION(BlueprintCallable)
    static void GetCharacterCollision(UClass* character_class, float& capsule_radius, float& capsule_half_height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBestClearTime(UObject* Context, UVGQuestRecord* record);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBestClearHero(UObject* Context, UVGQuestRecord* record);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAvatarEnemyLevelCap(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_GameEventContentId(const FVGContentId& A, const FVGContentId& B);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugString(FVector TextLocation, const FString& Text, const AActor* TestBaseActor, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugSphere(FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugPoint(FVector Position, float Size, FLinearColor PointColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugLine(FVector LineStart, FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCircle(FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool DrawAxis);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCapsule(FVector Center, float HalfHeight, float Radius, FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugBox(FVector Center, FVector Extent, FLinearColor LineColor, FRotator Rotation, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugArrow(FVector LineStart, FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void ClearObstacleNavArea(UObject* Context, const TArray<FName>& agentProperties);
    
    UFUNCTION(BlueprintCallable)
    static void ASyncNavMeshFlags(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void AddTalkCount(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool AddStartNavLocation(UObject* Context, const FVector& Position, const TArray<FName>& agentProperties, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void AddPartyMember(UObject* Context, EVGCharaUnique ID);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddObstacleNavArea(UObject* Context, const FVector& Position, const FVector& Extent, const TArray<FName>& agentProperties);
    
    UFUNCTION(BlueprintCallable)
    static void AddMoney(UObject* Context, EVGCharaUnique Unique, int32 amount);
    
    UFUNCTION(BlueprintCallable)
    static bool AddItemToInventoryEntry(UObject* Context, FName ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void AddCharacterReputation(UObject* Context, EVGCharaUnique Unique, int32 value, bool EnableOption);
    
    UFUNCTION(BlueprintCallable)
    static void AddAfasysTalkCount(UObject* Context);
    
};

