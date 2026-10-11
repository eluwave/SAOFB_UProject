#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EVGCharaUnique.h"
#include "EVGStatusAilment.h"
#include "EVGStatusBuff.h"
#include "EVGStatusBuffOp.h"
#include "VGBasicStatus.h"
#include "VGSpeedLvInfo.h"
#include "VGCharacterCalcComponent.generated.h"

class AVGBattleCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGCharacterCalcComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_health_vit_coeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_weight_str_coeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_health_recover_skill_per_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_health_recover_gadget_per_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGBasicStatus k_alter_status_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_alter_lv_coef_STR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_alter_lv_coef_VIT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_alter_lv_coef_INT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_alter_lv_coef_AGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_alter_lv_coef_DEX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_alter_lv_coef_LUK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_level_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_speed_enemy_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_flying_speed_AGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_weight_penalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_weight_rate_coef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSpeedLvInfo k_speed_branch[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_defense_coef_VIT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_defense_coef_AGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_defense_coef_LUK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_accuracy_DEX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_accuracy_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_accuracy_rate_AGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_aim_accuracy_rate_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_skill_reusable_time_INT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_skill_reusable_time_force;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> k_br_handicap_atk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> k_br_handicap_def;
    
    UVGCharacterCalcComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryLimitOver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuffValid(EVGStatusBuff Type, EVGStatusBuffOp Op) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAilment(EVGStatusAilment Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeightRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeightCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetWeaponReloadRate(float base_rate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetWeakPointFactorCoef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalStatusVIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalStatusSTR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalStatusLUK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalStatusINT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalStatusDEX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalStatusAGI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetSkillHealingCoef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPowerUnarmed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPowerRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPowerMelee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPowerGadget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPowerCloseRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetOpticalRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetItemLuck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetItemDropLuck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetHearingRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetEyesightRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetCriticalProbabilityCoef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetCriticalFactorCoef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGCharaUnique GetCharaUnique() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGBattleCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuffValue(EVGStatusBuff Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusVIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusSTR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusLUK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusINT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusDEX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuffStatusAGI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusVIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusSTR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusLUK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusINT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusDEX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasicStatusAGI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlterRate() const;
    
};

