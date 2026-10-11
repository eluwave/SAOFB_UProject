#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "VGLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    AVGLevelScriptActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void onSubLevelLoaded();
    
};

