#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"

#include "Components/SceneComponent.h"
#include "VGAIUnitNavRoute.h"
#include "VGAIUnitParam.h"
#include "VGAIUnitComponent.generated.h"

class AActor;
class AVGAITeam;
class UVGAIUnit;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGAIUnitComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_warp_mediator_class;
    
public:
    UVGAIUnitComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUnitParam(const FVGAIUnitParam& param);
    
    UFUNCTION(BlueprintCallable)
    void SetUnit(UVGAIUnit* unit);
    
    UFUNCTION(BlueprintCallable)
    void SetPerception(AActor* Actor, bool flag, bool onSight);
    
    UFUNCTION(BlueprintCallable)
    void SetActorsPerception(AActor* Actor, const FActorPerceptionBlueprintInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGAIUnitParam GetUnitParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnit(UVGAIUnit*& unit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeam(AVGAITeam*& Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNavRouteEx(TArray<FVGAIUnitNavRoute>& Points) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNavRoute(TArray<FVector>& Points) const;
    
};

