#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VGDungeonRoomTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGDungeonRoomTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGDungeonRoomTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGDungeonRoomTickFunction> : public TStructOpsTypeTraitsBase2<FVGDungeonRoomTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

