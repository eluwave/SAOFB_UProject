#pragma once
#include "CoreMinimal.h"
#include "VGAnimInstance.h"
#include "VGGameEventCharacterAnimParam.h"
#include "VGGameEventAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API UVGGameEventAnimInstance : public UVGAnimInstance {
    GENERATED_BODY()
public:
    UVGGameEventAnimInstance();

    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlaySlotAnimationAsMontage(const FVGGameEventCharacterAnimParam& param);
    
};

