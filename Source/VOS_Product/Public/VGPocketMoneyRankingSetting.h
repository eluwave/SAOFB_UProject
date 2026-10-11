#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGRankingCharacter.h"
#include "EVGRegion.h"
#include "VGPocketMoneyRankingSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGPocketMoneyRankingSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGRankingCharacter::Type> character_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sum_give_money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGRegion::Type> Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName name_text_id;
    
    VOS_PRODUCT_API FVGPocketMoneyRankingSetting();
};

