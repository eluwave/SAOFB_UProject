#pragma once
#include "CoreMinimal.h"
#include "EVGBattleType.h"
#include "VGAfasysSetting.h"
#include "VGCharacterSetting.h"
#include "VGBattleSettingCoop.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleSettingCoop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_set;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString quest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterSetting> npc_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysSetting> afasys_list;
    
    FVGBattleSettingCoop();
};

