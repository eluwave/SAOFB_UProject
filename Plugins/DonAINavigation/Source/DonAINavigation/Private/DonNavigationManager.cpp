#include "DonNavigationManager.h"
#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
ADonNavigationManager::ADonNavigationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->bIsUnbound = false;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->VoxelSize = 100.00f;
    this->XGridSize = 30;
    this->YGridSize = 30;
    this->ZGridSize = 30;
    this->ObstacleQueryChannels.AddDefaulted(2);
    this->AutoCorrectionGuessList.AddDefaulted(11);
    this->PerformCollisionChecksOnStartup = false;
    this->MaxPathSolverIterationsPerTick = 500;
    this->MaxCollisionSolverIterationsPerTick = 250;
    this->bMultiThreadingEnabled = false;
    this->MaxPathSolverIterationsOnThread = 1000;
    this->MaxCollisionSolverIterationsOnThread = 500;
    this->WorldBoundaryVisualizer = CreateDefaultSubobject<UBoxComponent>(TEXT("WorldBoundaryVisualizer"));
    this->bDisplayWorldBoundary = true;
    this->bDisplayWorldBoundaryInGame = false;
    this->DebugVoxelsLineThickness = 2.00f;
    this->bRunDebugValidationsForDynamicCollisions = false;
    this->Billboard->SetupAttachment(RootComponent);
    this->WorldBoundaryVisualizer->SetupAttachment(RootComponent);
}

void ADonNavigationManager::VisualizeNAVResult(const TArray<FVector>& PathSolution, FVector Source, FVector Destination, bool Reset, const FDoNNavigationDebugParams& DebugParams, const FColor& LineColor) {
}

void ADonNavigationManager::VisualizeDynamicCollisionListeners(FDonNavigationDynamicCollisionDelegate Listener, const FDoNNavigationQueryData& QueryData) {
}

void ADonNavigationManager::StopListeningToDynamicCollisionsForPathIndex(FDonNavigationDynamicCollisionDelegate ListenerToClear, const FDoNNavigationQueryData& QueryData, const int32 VolumeIndex) {
}

void ADonNavigationManager::StopListeningToDynamicCollisionsForPath(FDonNavigationDynamicCollisionDelegate ListenerToClear, const FDoNNavigationQueryData& QueryData) {
}

bool ADonNavigationManager::SchedulePathfindingTask(AActor* Actor, FVector Destination, const FDoNNavigationQueryParams& QueryParams, const FDoNNavigationDebugParams& DebugParams, FDoNNavigationResultHandler ResultHandlerDelegate, FDonNavigationDynamicCollisionDelegate DynamicCollisionListener, int32 QueryID) {
    return false;
}

bool ADonNavigationManager::ScheduleDynamicCollisionUpdate(UPrimitiveComponent* Mesh, FDonCollisionSamplerCallback ResultHandler, FName CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug) {
    return false;
}

bool ADonNavigationManager::IsMeshBoundsWithinNavigableWorld(UPrimitiveComponent* Mesh, float BoundsScaleFactor) {
    return false;
}

bool ADonNavigationManager::IsLocationWithinNavigableWorld(FVector DesiredLocation) {
    return false;
}

bool ADonNavigationManager::IsLocationBeneathLandscape(FVector Location, float LineTraceHeight) {
    return false;
}

bool ADonNavigationManager::IsDirectPathSweep(UPrimitiveComponent* CollisionComponent, FVector Start, FVector End, FHitResult& OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation) {
    return false;
}

bool ADonNavigationManager::IsDirectPathLineTrace(FVector Start, FVector End, FHitResult& OutHit, const TArray<AActor*>& ActorsToIgnore, bool bFindInitialOverlaps) {
    return false;
}

bool ADonNavigationManager::IsDirectPathLineSweep(UPrimitiveComponent* CollisionComponent, FVector Start, FVector End, FHitResult& OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation) {
    return false;
}

bool ADonNavigationManager::HasTask(AActor* Actor, int32 QueryID) {
    return false;
}

FVector ADonNavigationManager::FindRandomPointFromActorInNavWorld(AActor* Actor, float Distance, bool& bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts) {
    return FVector{};
}

FVector ADonNavigationManager::FindRandomPointAroundOriginInNavWorld(AActor* NavigationActor, FVector Origin, float Distance, bool& bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts) {
    return FVector{};
}

bool ADonNavigationManager::FindPathSolution_StressTesting(AActor* Actor, FVector Destination, TArray<FVector>& PathSolutionRaw, TArray<FVector>& PathSolutionOptimized, const FDoNNavigationQueryParams& QueryParams, const FDoNNavigationDebugParams& DebugParams) {
    return false;
}

void ADonNavigationManager::Debug_ToggleWorldBoundaryInGame() {
}

void ADonNavigationManager::Debug_DrawVoxelCollisionProfile(UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration) {
}

void ADonNavigationManager::Debug_DrawVolumesAroundPoint(FVector Location, int32 CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes) {
}

void ADonNavigationManager::Debug_DrawAllVolumes(float LineThickness) {
}

void ADonNavigationManager::Debug_ClearAllVolumes() {
}

void ADonNavigationManager::ConstructBuilder() {
}

FVector ADonNavigationManager::ClampLocationToNavigableWorld(FVector DesiredLocation) {
    return FVector{};
}

void ADonNavigationManager::AbortPathfindingTask(AActor* Actor, int32 QueryID) {
}

