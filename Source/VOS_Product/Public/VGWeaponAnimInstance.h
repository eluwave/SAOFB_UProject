#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "VGWeaponAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API UVGWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UVGWeaponAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBarrelRotation() const;
    
};

