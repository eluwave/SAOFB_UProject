#pragma once
#include "CoreMinimal.h"
#include "EVGTerminalItemType.h"
#include "VGTextSymbol.h"
#include "VGTerminalItem.generated.h"

USTRUCT(BlueprintType)
struct FVGTerminalItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTerminalItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol description_text;
    
    VOS_PRODUCT_API FVGTerminalItem();
};

