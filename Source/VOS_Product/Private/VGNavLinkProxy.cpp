#include "VGNavLinkProxy.h"

AVGNavLinkProxy::AVGNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLinks.AddDefaulted(1);
    this->bSmartLinkIsRelevant = true;
}

