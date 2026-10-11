#pragma once
#include "CoreMinimal.h"
#include "AIController.h"

#include "EVGPadKey.h"
#include "VGAIUnitParam.h"
#include "VGAIController.generated.h"

class AActor;
class AVGAITeam;
class AVGCharacter;
class UBlackboardComponent;
class UVGAIUnit;
class UVGAIUnitComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_owner_state_code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* m_bb_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAIUnitComponent* m_ai_unit_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAIUnitParam m_unit_parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_current_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_current_target_node_name;
    
public:
    AVGAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopBehaviorTree();
    
    UFUNCTION(BlueprintCallable)
    void SetUnit(UVGAIUnit* unit);
    
    UFUNCTION(BlueprintCallable)
    void SetPerceptionSightRadius(float SightRadius, float LoseSightRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetInput(TArray<TEnumAsByte<EVGPadKey::Type>> Keys, float press_time);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTarget(AVGCharacter* Target, FName NodeName);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseInput(TArray<TEnumAsByte<EVGPadKey::Type>> Keys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGAIUnitParam GetUnitParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGAIUnit* GetUnit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGAITeam* GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEndLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentTargetNodeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentTargetLocation(FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable)
    UBlackboardComponent* GetBlackboardComponent();
    
    UFUNCTION(BlueprintCallable)
    UVGAIUnitComponent* GetAIUnitComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyUnitParam() const;
    
    UFUNCTION(BlueprintCallable)
    void AddInput(TArray<TEnumAsByte<EVGPadKey::Type>> Keys, float press_time, bool press_time_add);
    
};

