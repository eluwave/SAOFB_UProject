#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGAxisMapping.h"
#include "VGKeyMapping.h"
#include "VGInputPreset.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGInputPreset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGKeyMapping> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAxisMapping> axes;
    
    FVGInputPreset();
};

