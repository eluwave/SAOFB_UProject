#pragma once
#include "CoreMinimal.h"
#include "VGDropNumDifficultyModifyTable.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDropNumDifficultyModifyTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float easy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float hard;
    
    FVGDropNumDifficultyModifyTable();
};

