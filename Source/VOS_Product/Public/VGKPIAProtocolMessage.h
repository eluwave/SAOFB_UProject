#pragma once
#include "CoreMinimal.h"
#include "NetMessage.h"
#include "VGKPIAProtocolMessage.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGKPIAProtocolMessage : public UNetMessage {
    GENERATED_BODY()
public:
    UVGKPIAProtocolMessage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DumpRequest(const FString& prefix);
    
};

