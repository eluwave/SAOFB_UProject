#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "VGWorldSettings.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    AVGWorldSettings(const FObjectInitializer& ObjectInitializer);

};

