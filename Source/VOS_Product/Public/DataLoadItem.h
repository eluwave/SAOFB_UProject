#pragma once
#include "CoreMinimal.h"
#include "DataLoadItem.generated.h"

USTRUCT(BlueprintType)
struct FDataLoadItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_date_string;
    
    VOS_PRODUCT_API FDataLoadItem();
};

