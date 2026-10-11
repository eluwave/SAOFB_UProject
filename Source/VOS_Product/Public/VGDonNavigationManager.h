#pragma once
#include "CoreMinimal.h"
#include "DonNavigationManager.h"
#include "VGDonNavigationManager.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDonNavigationManager : public ADonNavigationManager {
    GENERATED_BODY()
public:
    AVGDonNavigationManager(const FObjectInitializer& ObjectInitializer);

};

