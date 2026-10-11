#pragma once
#include "CoreMinimal.h"
#include "EVGDataBaseType.h"
#include "VGTextSymbol.h"
#include "VGDataBaseTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDataBaseTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDataBaseType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Text;
    
    FVGDataBaseTypeInfo();
};

