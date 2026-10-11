#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "DonNavigator.generated.h"

UINTERFACE(Blueprintable)
class DONAINAVIGATION_API UDonNavigator : public UInterface {
    GENERATED_BODY()
};

class DONAINAVIGATION_API IDonNavigator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNextSegment(FVector NextPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocomotionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocomotionBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocomotionAbort();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMovementInputCustom(FVector WorldDirection, float ScaleValue);
    
};

