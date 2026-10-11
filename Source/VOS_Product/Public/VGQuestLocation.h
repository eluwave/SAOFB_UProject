#pragma once
#include "CoreMinimal.h"

#include "Engine/DataTable.h"
#include "VGQuestLocation.generated.h"

USTRUCT(BlueprintType)
struct FVGQuestLocation : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName map_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    VOS_PRODUCT_API FVGQuestLocation();
};

