#pragma once
#include "CoreMinimal.h"
#include "VGAfasysFriendMessage.h"
#include "VGGameEventStepSequence.h"
#include "VGAfasysStepSequence.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAfasysStepSequence : public UVGGameEventStepSequence {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysFriendMessage m_friend_message;
    
public:
    UVGAfasysStepSequence();

    UFUNCTION(BlueprintCallable)
    FName GetFriendMessage();
    
};

