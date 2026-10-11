#pragma once
#include "CoreMinimal.h"
#include "VGTitleTrialDialog.generated.h"

USTRUCT(BlueprintType)
struct FVGTitleTrialDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_tutorial;
    
    VOS_PRODUCT_API FVGTitleTrialDialog();
};

