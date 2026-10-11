#pragma once
#include "CoreMinimal.h"

#include "VGWidget.h"
#include "VGHudAimDownSight.generated.h"

class AActor;
class AVGPlayer;
class UBorder;
class UImage;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudAimDownSight : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ReticleOutRangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ReticleInMaxRangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ReticleInEffectiveRangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ReticleFriendlyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ReticleRunColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ReticleRunOutRangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CircleOutRangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CircleInMaxRangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CircleInEffectiveRangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CircleFriendlyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CircleRunColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CircleRunOutRangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGPlayer* m_BindPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_AimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_BasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_SightRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_CircleBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBorder* m_CircleColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_Reticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ReticleFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ReticleCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBorder* m_CircleFrameBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGWidget* m_AmmoWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGWidget* m_HeavyWarning;
    
public:
    UVGHudAimDownSight();

    UFUNCTION(BlueprintCallable)
    void UpdateAssistTarget(bool is_ads, bool is_aim_assist, bool has_target);
    
    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void SetSightArea(FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetReticleSize(float Size);
    
    UFUNCTION(BlueprintCallable)
    void SetReticlePosition(const FVector2D& pos);
    
    UFUNCTION(BlueprintCallable)
    void SetBulletCircleSize(float Size);
    
    UFUNCTION(BlueprintCallable)
    void SetBulletCirclePosition(const FVector2D& pos);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScopeReticleOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScopeReticleIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaveBulletCircle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterBulletCircle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAssistOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAssistIn();
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveBulletCircle();
    
    UFUNCTION(BlueprintCallable)
    bool IsDispScopeReticle();
    
    UFUNCTION(BlueprintCallable)
    bool IsDispBulletCircle();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable)
    void EnterBulletCircle();
    
    UFUNCTION(BlueprintCallable)
    void BindCharacter(AVGPlayer* Target);
    
};

