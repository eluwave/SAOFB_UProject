#pragma once
#include "CoreMinimal.h"
#include "VGGameEventLocator.h"
#include "VGGameEventSelfSetupLocatorDispatcherDelegate.h"
#include "VGGameEventSelfSetupLocator.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventSelfSetupLocator : public AVGGameEventLocator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventSelfSetupLocatorDispatcher OnInteractionDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventSelfSetupLocatorDispatcher OnGenericTriggerDispatcher;
    
    AVGGameEventSelfSetupLocator(const FObjectInitializer& ObjectInitializer);

};

