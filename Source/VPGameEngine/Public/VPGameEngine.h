#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "VPGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class VPGAMEENGINE_API UVPGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UVPGameEngine();

};

