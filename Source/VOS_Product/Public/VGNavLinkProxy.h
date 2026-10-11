#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavLinkProxy.h"
#include "VGNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AVGNavLinkProxy(const FObjectInitializer& ObjectInitializer);

};

