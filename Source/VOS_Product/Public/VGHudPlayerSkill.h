#pragma once
#include "CoreMinimal.h"

#include "EVGHudPlayerSkillState.h"
#include "VGWidget.h"
#include "VGHudPlayerSkill.generated.h"

class UImage;
class UProgressBar;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudPlayerSkill : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SkillIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGHudPlayerSkillState::Type> State;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_SkillIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_SkillGauge;
    
public:
    UVGHudPlayerSkill();

    UFUNCTION(BlueprintCallable)
    void SetSkillIcon(UTexture2D* skill_icon);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillGaugeRate(float rate);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillGaugeColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimCharge();
    
};

