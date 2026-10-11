#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "VGWarpMediator.generated.h"

class ATargetPoint;
class AVGBattleCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGWarpMediator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWarpNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForceOnNaviMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> WarpOffsets;
    
    AVGWarpMediator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WarpFailed();
    
public:
    UFUNCTION(BlueprintCallable)
    void WarpBestPosition(AVGBattleCharacter* Actor, FVector Location, FRotator Rotation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetWireState(AVGBattleCharacter* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarpTransform(AActor* Actor, FTransform Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarpLocation(AActor* Actor, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarp(AActor* Actor, ATargetPoint* Target);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActorHidden(AVGBattleCharacter* Actor, bool is_hidden);
    
    UFUNCTION(BlueprintCallable)
    void AfterWarp(AVGBattleCharacter* Actor);
    
};

