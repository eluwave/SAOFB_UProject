#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DMDebugCommanderBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DMDEVELOPER_API UDMDebugCommanderBase : public UObject {
    GENERATED_BODY()
public:
    UDMDebugCommanderBase();

};

