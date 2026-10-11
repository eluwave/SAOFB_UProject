#pragma once
#include "CoreMinimal.h"

#include "VGAIController.h"
#include "VGBattleAIController.generated.h"

class AActor;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattleAIController : public AVGAIController {
    GENERATED_BODY()
public:
    AVGBattleAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentTargetLocation(FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorEyesViewPoint(FVector& out_Location, FRotator& out_Rotation) const;
    
};

