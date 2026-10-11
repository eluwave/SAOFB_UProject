#pragma once
#include "CoreMinimal.h"
#include "EVGDamageAttr.h"
#include "VGCharacterHitTolerance.h"
#include "VGHitBox.h"
#include "VGGadgetKnife.generated.h"

class AVGBattleCharacter;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGadgetKnife : public AVGHitBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_velocity_limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_begin_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_end_vfx;
    
public:
    AVGGadgetKnife(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindAttr(const TArray<EVGDamageAttr>& attr_array, EVGDamageAttr attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTolerance(const FVGCharacterHitTolerance& tolerance, const TArray<EVGDamageAttr>& attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageKnife(AVGBattleCharacter* attacker, AVGBattleCharacter* Target, float damage_factor, float tolerance_result) const;
    
};

