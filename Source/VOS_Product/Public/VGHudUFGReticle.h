#pragma once
#include "CoreMinimal.h"

#include "VGWidget.h"
#include "VGHudUFGReticle.generated.h"

class AVGArmed;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudUFGReticle : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StabColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NotStabColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EnemyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EnemyItemColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RepelColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SwitchColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGArmed* m_BindTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_BasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_Reticle;
    
public:
    UVGHudUFGReticle();

    UFUNCTION(BlueprintCallable)
    void SetReticlePosition(const FVector2D& pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimStab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimNotStab();
    
    UFUNCTION(BlueprintCallable)
    void BindCharacter(AVGArmed* Target);
    
};

