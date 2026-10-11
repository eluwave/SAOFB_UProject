#pragma once
#include "CoreMinimal.h"
#include "VGKPIAProtocolMessage.h"
#include "VGKPIDataRequest.generated.h"

UCLASS(Blueprintable)
class UVGKPIDataRequest : public UVGKPIAProtocolMessage {
    GENERATED_BODY()
public:
    UVGKPIDataRequest();

};

