#pragma once
#include "CoreMinimal.h"
#include "VGBattleOverwriteRuleParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleOverwriteRuleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_set;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float play_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 respawn_num;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 kill_goal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 death_penalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool has_handicap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 battle_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float score_streak_gauge_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_disable_acc_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_disable_weapon_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_disable_ultimate;
    
    FVGBattleOverwriteRuleParam();
};

