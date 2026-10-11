#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "VGPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UVGPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarpNextSegment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOffmeshSegment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObstacleSegment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpSegment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouchSegment() const;
    
};

