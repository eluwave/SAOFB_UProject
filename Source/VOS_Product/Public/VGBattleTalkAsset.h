#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGBattleTalkGroupConfig.h"
#include "VGBattleTalkAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBattleTalkAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkGroupConfig> m_group_config_talk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkGroupConfig> m_group_config_conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_find_hiding_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_good_action_timer_kill_enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_good_action_timer_use_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_good_action_timer_use_gadget;
    
public:
    UVGBattleTalkAsset();

};

