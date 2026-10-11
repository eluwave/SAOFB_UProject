#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "CamAwareTargetParam.h"
#include "DMCamOccluder.generated.h"

UCLASS(Abstract, Blueprintable)
class ADMCamOccluder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAppeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCamAwareTargetParam> Targets;
    
    ADMCamOccluder(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetVectorParam(FName ParamName, FLinearColor ParamValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParam(FName ParamName, float ParamValue);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

