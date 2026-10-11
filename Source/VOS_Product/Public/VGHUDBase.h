#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "VGHUDBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGHUDBase : public AHUD {
    GENERATED_BODY()
public:
    AVGHUDBase(const FObjectInitializer& ObjectInitializer);

};

