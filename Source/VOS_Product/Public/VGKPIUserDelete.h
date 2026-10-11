#pragma once
#include "CoreMinimal.h"
#include "VGKPIAProtocolMessage.h"
#include "VGKPIUserDelete.generated.h"

UCLASS(Blueprintable)
class UVGKPIUserDelete : public UVGKPIAProtocolMessage {
    GENERATED_BODY()
public:
    UVGKPIUserDelete();

};

