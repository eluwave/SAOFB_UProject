#pragma once
#include "CoreMinimal.h"
#include "EVGDamageAttr.h"
#include "VGCharacterHitTolerance.h"
#include "VGHitBox.h"
#include "VGRequestToLeaveInterface.h"
#include "VGSoundCueInfo.h"
#include "VGGadgetExplodeArea.generated.h"

class AVGBattleCharacter;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGadgetExplodeArea : public AVGHitBox, public IVGRequestToLeaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hit_own;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_life_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_begin_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_end_vfx;
    
public:
    AVGGadgetExplodeArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindAttr(const TArray<EVGDamageAttr>& attr_array, EVGDamageAttr attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTolerance(const FVGCharacterHitTolerance& tolerance, const TArray<EVGDamageAttr>& attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageGadget(AVGBattleCharacter* attacker, AVGBattleCharacter* Target, float damage_factor, float tolerance_result) const;
    

    // Fix for true pure virtual functions not being implemented
};

