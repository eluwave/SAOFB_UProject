#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGTutorialTaskData.generated.h"

class UVGTutorialScript;

USTRUCT(BlueprintType)
struct FVGTutorialTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTutorialScript> script;
    
    VOS_PRODUCT_API FVGTutorialTaskData();
};

