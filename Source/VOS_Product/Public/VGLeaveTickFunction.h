#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGLeaveTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGLeaveTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGLeaveTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGLeaveTickFunction> : public TStructOpsTypeTraitsBase2<FVGLeaveTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

