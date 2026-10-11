#pragma once
#include "CoreMinimal.h"
#include "VGMarksActionPersonalCounter.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksActionPersonalCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float counter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 chara_id;
    
    VOS_PRODUCT_API FVGMarksActionPersonalCounter();
};

