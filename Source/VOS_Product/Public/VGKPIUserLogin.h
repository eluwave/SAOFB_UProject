#pragma once
#include "CoreMinimal.h"
#include "VGKPIAProtocolMessage.h"
#include "VGKPIUserLogin.generated.h"

UCLASS(Blueprintable)
class UVGKPIUserLogin : public UVGKPIAProtocolMessage {
    GENERATED_BODY()
public:
    UVGKPIUserLogin();

};

