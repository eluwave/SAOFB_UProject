#pragma once
#include "CoreMinimal.h"
#include "EVGDamageAttr.h"
#include "VGBattleCharacter.h"
#include "VGCharacterHitTolerance.h"
#include "VGUnarmed.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGUnarmed : public AVGBattleCharacter {
    GENERATED_BODY()
public:
    AVGUnarmed(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindAttr(const TArray<EVGDamageAttr>& attr_array, EVGDamageAttr attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTolerance(const FVGCharacterHitTolerance& tolerance, const TArray<EVGDamageAttr>& attr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageUnarmed(AVGBattleCharacter* attacker, AVGBattleCharacter* Target, const TArray<EVGDamageAttr>& attr, float damage_factor, float tolerance_result, float critical_factor) const;
    
};

