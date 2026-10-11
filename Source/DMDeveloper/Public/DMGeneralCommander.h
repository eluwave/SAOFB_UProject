#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "DMDebugCommanderBase.h"
#include "DMGeneralCommander.generated.h"

class UDMOverlayStack;

UCLASS(Blueprintable)
class DMDEVELOPER_API UDMGeneralCommander : public UDMDebugCommanderBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDMOverlayStack* OverlayStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush ImageTestBrush;
    
public:
    UDMGeneralCommander();

};

