#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGRankingCharacter.h"
#include "EVGRegion.h"
#include "VGTimeAttackRankingSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGTimeAttackRankingSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGRankingCharacter::Type> character_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 quest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clear_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGRegion::Type> Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName name_text_id;
    
    VOS_PRODUCT_API FVGTimeAttackRankingSetting();
};

