#pragma once
#include "CoreMinimal.h"
#include "EVGBattleType.h"
#include "VGBattleOverwriteRuleParam.h"
#include "VGBattleUserTeam.h"
#include "VGPlayerSetting.h"
#include "VGBattleSettingVersus.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleSettingVersus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_set;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString quest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPlayerSetting> specified_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleUserTeam> user_team_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGBattleOverwriteRuleParam overwrite_rule;
    
    FVGBattleSettingVersus();
};

