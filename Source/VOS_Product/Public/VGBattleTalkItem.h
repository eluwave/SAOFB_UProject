#pragma once
#include "CoreMinimal.h"
#include "EVGBattleTalkGroup.h"
#include "VGBattleTalkItem.generated.h"

class AVGBattleCharacter;
class UVGBattleTalkHeader;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleTalkItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleTalkHeader* m_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* m_main_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* m_target_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleTalkGroup m_group_id;
    
    FVGBattleTalkItem();
};

