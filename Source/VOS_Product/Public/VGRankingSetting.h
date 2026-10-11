#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGRankingCharacter.h"
#include "VGRankingSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGRankingSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGRankingCharacter::Type> character_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 acquisition_prize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName name_text_id;
    
    VOS_PRODUCT_API FVGRankingSetting();
};

