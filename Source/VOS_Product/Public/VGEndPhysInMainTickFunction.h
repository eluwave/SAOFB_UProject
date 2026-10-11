#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGEndPhysInMainTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGEndPhysInMainTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGEndPhysInMainTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGEndPhysInMainTickFunction> : public TStructOpsTypeTraitsBase2<FVGEndPhysInMainTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

