#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoundPlaybackDelegateDelegate.h"
#include "VGSoundPlaybackHandle.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSoundPlaybackHandle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundPlaybackDelegate OnSoundPlaybackEnd;
    
    AVGSoundPlaybackHandle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlaybackEnd(int32 InPlaybackId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaybackId() const;
    
};

