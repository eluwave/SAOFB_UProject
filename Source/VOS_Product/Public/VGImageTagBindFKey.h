#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "VGImageTagBindFKey.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGImageTagBindFKey : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName image_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey game_key;
    
    FVGImageTagBindFKey();
};

