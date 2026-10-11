#pragma once
#include "CoreMinimal.h"
#include "VGKPIAProtocolMessage.h"
#include "VGKPIUserCreate.generated.h"

UCLASS(Blueprintable)
class UVGKPIUserCreate : public UVGKPIAProtocolMessage {
    GENERATED_BODY()
public:
    UVGKPIUserCreate();

};

