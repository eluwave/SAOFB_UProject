#pragma once
#include "CoreMinimal.h"
#include "VGUIActor.h"
#include "VGAfasysMenuBase.generated.h"

class AVGAfasysMenuAgent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysMenuBase : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuAgent* m_parent_agent;
    
public:
    AVGAfasysMenuBase(const FObjectInitializer& ObjectInitializer);

};

