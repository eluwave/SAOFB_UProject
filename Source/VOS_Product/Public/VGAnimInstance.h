#pragma once
#include "CoreMinimal.h"

#include "Animation/AnimInstance.h"
#include "EVGAnimAsset.h"
#include "EVGAnimSlot.h"
#include "EVGIKLayer.h"
#include "EVGIKState.h"
#include "EVGIKType.h"
#include "VGAnimActionSlot.h"
#include "VGIKContext.h"
#include "VGLookAtContext.h"
#include "VGAnimInstance.generated.h"

class AVGCharacter;
class UAnimSequence;
class UBlendSpaceBase;
class UVGCharacterFigureSetting;

UCLASS(Blueprintable, NonTransient, Config=Game)
class VOS_PRODUCT_API UVGAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGAnimActionSlot> m_actions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_figure_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGLookAtContext m_lookat_context;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_lookat_rotate_limit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lookat_default_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGIKContext> m_ik_context;
    
public:
    UVGAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetLookAtPosition(FVector pos, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtEnabled(bool value);
    
    UFUNCTION(BlueprintCallable)
    void SetIKState(EVGIKType::Type Type, EVGIKLayer::Type Layer, EVGIKState::Type State, float lerpTime, bool addCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoop(EVGAnimSlot::Type Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGCharacter* GetVGCharacter() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGLookAtContext GetLookAtContext() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIKLerp(EVGIKType::Type Type, bool enabledCheck) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIdleAnimationStartPosition() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGCharacterFigureSetting* GetFigureSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlendTime(EVGAnimSlot::Type Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpaceBase* GetBlendSpace(EVGAnimSlot::Type Slot, EVGAnimAsset::Type asset_type, float& param_x, float& param_y, float& play_rate, bool& is_loop) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlendConfigId(EVGAnimSlot::Type Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimSequence(EVGAnimSlot::Type Slot, EVGAnimAsset::Type asset_type, float& play_rate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGAnimAsset::Type GetAnimAssetType(EVGAnimSlot::Type Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAdditiveFilterBoneName() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyFigureSetting(UVGCharacterFigureSetting* setting);
    
};

