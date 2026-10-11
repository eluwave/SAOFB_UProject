#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGAITeamPostPhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGAITeamPostPhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGAITeamPostPhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGAITeamPostPhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGAITeamPostPhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

