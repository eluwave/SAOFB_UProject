#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGScanFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGScanFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGScanFunction();
};

template<>
struct TStructOpsTypeTraits<FVGScanFunction> : public TStructOpsTypeTraitsBase2<FVGScanFunction>
{
    enum
    {
        WithCopy = false
    };
};

