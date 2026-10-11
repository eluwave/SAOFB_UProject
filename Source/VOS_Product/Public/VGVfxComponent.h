#pragma once
#include "CoreMinimal.h"

#include "Components/SceneComponent.h"
#include "VGVfxSignalDesc.h"
#include "VGVfxWork.h"
#include "VGVfxComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGVfxComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGVfxWork> m_works;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGVfxSignalDesc> m_requests;
    
public:
    UVGVfxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRenderEffectAll(bool enable);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderEffect(FName signal_name, bool enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectRotation(FName signal_name, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectLocation(FName signal_name, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetBeamPoint(FName signal_name, const FVector& Source, const FVector& Target);
    
    UFUNCTION(BlueprintCallable)
    void ResumeEffect(FName signal_name);
    
    UFUNCTION(BlueprintCallable)
    void PauseEffect(FName signal_name);
    
    UFUNCTION(BlueprintCallable)
    void DeleteEffect(FName signal_name);
    
    UFUNCTION(BlueprintCallable)
    void CreateEffect(const FVGVfxSignalDesc& desc);
    
    UFUNCTION(BlueprintCallable)
    void ClearEffects();
    
    UFUNCTION(BlueprintCallable)
    void CancelEffects();
    
    UFUNCTION(BlueprintCallable)
    void CancelEffect(FName signal_name);
    
};

