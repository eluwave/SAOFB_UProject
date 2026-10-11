#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGShowTutorialPage.generated.h"

USTRUCT(BlueprintType)
struct FVGShowTutorialPage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> page_texts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float wait_time;
    
    VOS_PRODUCT_API FVGShowTutorialPage();
};

