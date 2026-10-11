#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGPreparationTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGPreparationTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGPreparationTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGPreparationTickFunction> : public TStructOpsTypeTraitsBase2<FVGPreparationTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

