#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGGPPreparationReservedInMainTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGGPPreparationReservedInMainTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGGPPreparationReservedInMainTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGGPPreparationReservedInMainTickFunction> : public TStructOpsTypeTraitsBase2<FVGGPPreparationReservedInMainTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

