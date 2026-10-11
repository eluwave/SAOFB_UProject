#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGPostPhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGPostPhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGPostPhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGPostPhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGPostPhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

