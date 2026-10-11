#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "DoNNavigationDebugParams.h"
#include "DoNNavigationQueryData.h"
#include "DoNNavigationQueryParams.h"
#include "DoNNavigationResultHandlerDelegate.h"
#include "DonCollisionSamplerCallbackDelegate.h"
#include "DonNavVoxelXYZ.h"
#include "DonNavigationDynamicCollisionDelegateDelegate.h"
#include "DonNavigationManager.generated.h"

class UBillboardComponent;
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class DONAINAVIGATION_API ADonNavigationManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDonNavVoxelXYZ NAVVolumeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 YGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> ObstacleQueryChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnoreForCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AutoCorrectionGuessList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PerformCollisionChecksOnStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPathSolverIterationsPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCollisionSolverIterationsPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiThreadingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPathSolverIterationsOnThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCollisionSolverIterationsOnThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* WorldBoundaryVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayWorldBoundary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayWorldBoundaryInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugVoxelsLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunDebugValidationsForDynamicCollisions;
    
    ADonNavigationManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VisualizeNAVResult(const TArray<FVector>& PathSolution, FVector Source, FVector Destination, bool Reset, const FDoNNavigationDebugParams& DebugParams, const FColor& LineColor);
    
    UFUNCTION(BlueprintCallable)
    void VisualizeDynamicCollisionListeners(FDonNavigationDynamicCollisionDelegate Listener, const FDoNNavigationQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void StopListeningToDynamicCollisionsForPathIndex(FDonNavigationDynamicCollisionDelegate ListenerToClear, const FDoNNavigationQueryData& QueryData, const int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void StopListeningToDynamicCollisionsForPath(FDonNavigationDynamicCollisionDelegate ListenerToClear, const FDoNNavigationQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    bool SchedulePathfindingTask(AActor* Actor, FVector Destination, const FDoNNavigationQueryParams& QueryParams, const FDoNNavigationDebugParams& DebugParams, FDoNNavigationResultHandler ResultHandlerDelegate, FDonNavigationDynamicCollisionDelegate DynamicCollisionListener, int32 QueryID);
    
    UFUNCTION(BlueprintCallable)
    bool ScheduleDynamicCollisionUpdate(UPrimitiveComponent* Mesh, FDonCollisionSamplerCallback ResultHandler, FName CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshBoundsWithinNavigableWorld(UPrimitiveComponent* Mesh, float BoundsScaleFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationWithinNavigableWorld(FVector DesiredLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationBeneathLandscape(FVector Location, float LineTraceHeight);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirectPathSweep(UPrimitiveComponent* CollisionComponent, FVector Start, FVector End, FHitResult& OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirectPathLineTrace(FVector Start, FVector End, FHitResult& OutHit, const TArray<AActor*>& ActorsToIgnore, bool bFindInitialOverlaps);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirectPathLineSweep(UPrimitiveComponent* CollisionComponent, FVector Start, FVector End, FHitResult& OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTask(AActor* Actor, int32 QueryID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindRandomPointFromActorInNavWorld(AActor* Actor, float Distance, bool& bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindRandomPointAroundOriginInNavWorld(AActor* NavigationActor, FVector Origin, float Distance, bool& bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts);
    
    UFUNCTION(BlueprintCallable)
    bool FindPathSolution_StressTesting(AActor* Actor, FVector Destination, TArray<FVector>& PathSolutionRaw, TArray<FVector>& PathSolutionOptimized, const FDoNNavigationQueryParams& QueryParams, const FDoNNavigationDebugParams& DebugParams);
    
    UFUNCTION(BlueprintCallable)
    void Debug_ToggleWorldBoundaryInGame();
    
    UFUNCTION(BlueprintCallable)
    void Debug_DrawVoxelCollisionProfile(UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void Debug_DrawVolumesAroundPoint(FVector Location, int32 CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes);
    
    UFUNCTION(BlueprintCallable)
    void Debug_DrawAllVolumes(float LineThickness);
    
    UFUNCTION(BlueprintCallable)
    void Debug_ClearAllVolumes();
    
    UFUNCTION(BlueprintCallable)
    void ConstructBuilder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ClampLocationToNavigableWorld(FVector DesiredLocation);
    
    UFUNCTION(BlueprintCallable)
    void AbortPathfindingTask(AActor* Actor, int32 QueryID);
    
};

