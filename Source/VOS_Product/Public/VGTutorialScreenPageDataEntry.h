#pragma once
#include "CoreMinimal.h"
#include "VGTutorialScreenPageDataEntry.generated.h"

class UVGTutorialScreenData;

USTRUCT(BlueprintType)
struct FVGTutorialScreenPageDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTutorialScreenData* screen_data_reference;
    
    VOS_PRODUCT_API FVGTutorialScreenPageDataEntry();
};

