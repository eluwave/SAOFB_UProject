#pragma once
#include "CoreMinimal.h"
#include "DMDebugCommanderBase.h"
#include "DMVFxCommander.generated.h"

class UDMOverlayStack;

UCLASS(Blueprintable)
class DMDEVELOPER_API UDMVFxCommander : public UDMDebugCommanderBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDMOverlayStack* OverlayStack;
    
public:
    UDMVFxCommander();

};

