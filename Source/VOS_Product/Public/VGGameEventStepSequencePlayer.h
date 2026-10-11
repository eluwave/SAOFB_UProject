#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGDialogButton.h"
#include "VGGameEventStepSequenceLocator.h"
#include "VGGameEventStepSequencePlayer.generated.h"

class AVGGameEventLocator;
class UVGDialog;
class UVGGameEventStepSequenceRefEvent;

UCLASS(Blueprintable)
class AVGGameEventStepSequencePlayer : public AVGGameEventStepSequenceLocator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGameEventStepSequenceRefEvent* m_event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGDialog* m_skip_dialog;
    
public:
    AVGGameEventStepSequencePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Play(FName EventId, const FStringAssetReference& Path, AVGGameEventLocator* locator);
    
private:
    UFUNCTION(BlueprintCallable)
    void onFadeCompleted();
    
    UFUNCTION(BlueprintCallable)
    void onDecideSkipDialog(EVGDialogButton::Type result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
};

