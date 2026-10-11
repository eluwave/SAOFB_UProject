#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGPadKey.h"
#include "VGTextSymbol.h"
#include "VGKeyCustomParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGKeyCustomParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol controll_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGPadKey::Type>> game_key;
    
    FVGKeyCustomParam();
};

