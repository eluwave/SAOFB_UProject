#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGRoamHUDPostPhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGRoamHUDPostPhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGRoamHUDPostPhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGRoamHUDPostPhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGRoamHUDPostPhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

