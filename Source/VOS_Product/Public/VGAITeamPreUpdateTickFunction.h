#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGAITeamPreUpdateTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGAITeamPreUpdateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGAITeamPreUpdateTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGAITeamPreUpdateTickFunction> : public TStructOpsTypeTraitsBase2<FVGAITeamPreUpdateTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

