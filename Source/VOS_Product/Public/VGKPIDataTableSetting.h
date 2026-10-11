#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGKPIDataTableSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGKPIDataTableSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString data_name;
    
    VOS_PRODUCT_API FVGKPIDataTableSetting();
};

