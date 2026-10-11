#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGMapObjectData.h"
#include "VGMapLocationData.generated.h"

USTRUCT(BlueprintType)
struct FVGMapLocationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName map_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName event_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString portal_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMapObjectData object_data;
    
    VOS_PRODUCT_API FVGMapLocationData();
};

