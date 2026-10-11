#pragma once
#include "CoreMinimal.h"
#include "VGBattleTalkGroup.h"
#include "VGBattleConversationGroup.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleConversationGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName group_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkGroup> m_battle_talk_group_list;
    
    FVGBattleConversationGroup();
};

