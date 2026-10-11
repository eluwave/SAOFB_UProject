#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGAfasysSerifData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysSerifData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Serif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressFlag;
    
    FVGAfasysSerifData();
};

