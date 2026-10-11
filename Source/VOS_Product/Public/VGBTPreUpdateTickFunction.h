#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGBTPreUpdateTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGBTPreUpdateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGBTPreUpdateTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGBTPreUpdateTickFunction> : public TStructOpsTypeTraitsBase2<FVGBTPreUpdateTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

