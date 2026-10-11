#pragma once
#include "CoreMinimal.h"
#include "DMDebugCommanderBase.h"
#include "DMOverlayCommander.generated.h"

class UDMOverlayStack;

UCLASS(Blueprintable, Config=DevOnly)
class UDMOverlayCommander : public UDMDebugCommanderBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDMOverlayStack* OverlayStack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowShortcutNav;
    
public:
    UDMOverlayCommander();

    UFUNCTION(BlueprintCallable, Exec)
    void EnableLogWindow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableContextMenu();
    
};

