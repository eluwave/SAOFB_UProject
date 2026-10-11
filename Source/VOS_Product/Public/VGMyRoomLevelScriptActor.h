#pragma once
#include "CoreMinimal.h"
#include "VGLevelScriptActor.h"
#include "VGMyRoomLevelCondition.h"
#include "VGMyRoomLevelScriptActor.generated.h"

UCLASS(Blueprintable, Config=Game)
class AVGMyRoomLevelScriptActor : public AVGLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMyRoomLevelCondition> m_activation_conditions;
    
public:
    AVGMyRoomLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

