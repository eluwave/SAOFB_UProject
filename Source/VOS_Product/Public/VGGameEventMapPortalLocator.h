#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventSelfSetupLocator.h"
#include "VGGameEventMapPortalLocator.generated.h"

class UVGGameEventBase;
class UVGGameEventStepSequence;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventMapPortalLocator : public AVGGameEventSelfSetupLocator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_launchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_single_portal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGameEventBase> m_single_portal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGameEventStepSequence> m_multi_event;
    
public:
    AVGGameEventMapPortalLocator(const FObjectInitializer& ObjectInitializer);

};

