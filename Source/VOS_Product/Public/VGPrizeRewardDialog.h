#pragma once
#include "CoreMinimal.h"
#include "VGPrizeRewardDialog.generated.h"

USTRUCT(BlueprintType)
struct FVGPrizeRewardDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText dialog_text;
    
    VOS_PRODUCT_API FVGPrizeRewardDialog();
};

