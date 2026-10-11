#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysAIBattleStyle.h"
#include "EVGAfasysAIRecovery.h"
#include "EVGAfasysAIRescue.h"
#include "EVGAfasysAIType.h"
#include "EVGAfasysMenuBankMoneyOperation.h"
#include "EVGAfasysMenuPriorityItem.h"
#include "EVGAfasysMenuShoping.h"
#include "VGSaveAfasysDataChunk.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveAfasysDataChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 afasys_talk_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 talk_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuShoping::Type> shoping_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuShoping::Type> old_shoping_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuPriorityItem::Type> shoping_priority_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuPriorityItem::Type> old_shoping_priority_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 shoping_quest_clear_count;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 pocket_money;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 grand_total_pocket_money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bank_money;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 bank_money_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bank_money_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuBankMoneyOperation::Type> bank_money_operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bank_money_quest_clear_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> emotion_action_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName emotion_set_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysAIType::Type> ai_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysAIBattleStyle::Type> ai_battle_style_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysAIRecovery::Type> ai_recovery_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysAIRescue::Type> ai_rescue_type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> use_functions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> descriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 costume_change_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hair_change_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> party_in_times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> party_in_total_times;
    
    VOS_PRODUCT_API FVGSaveAfasysDataChunk();
};

