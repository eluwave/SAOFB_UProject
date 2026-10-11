#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGAITeamPrePhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGAITeamPrePhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGAITeamPrePhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGAITeamPrePhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGAITeamPrePhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

