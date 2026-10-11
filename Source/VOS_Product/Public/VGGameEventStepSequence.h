#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventStepCommandMessage.h"
#include "VGGameEventStepCommandWait.h"
#include "VGGameEventStepSelectionEntry.h"
#include "VGGameEventStepSequenceSetup.h"
#include "VGGameEventStepSequenceStep.h"
#include "VGTextSymbol.h"
#include "VGGameEventStepSequence.generated.h"

class AActor;
class ACameraActor;
class AVGAdventureAgent;
class UUserWidget;
class UVGFixedCameraEventWidget;
class UVGGameEventBase;
class UVGGameEventStepSequenceActorHolder;
class UVGMessageWindow;
class UVGSelectionWindow;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGGameEventStepSequence : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventStepSequenceSetup m_setup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventStepSequenceStep m_step;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMessageWindow> m_message_widget_class;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGSelectionWindow> m_selection_widget_class;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_screen_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAdventureAgent* m_message_feeder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGFixedCameraEventWidget* m_screen_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGameEventStepSequenceActorHolder* m_actor_holder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_old_view_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_event_actor;
    
public:
    UVGGameEventStepSequence();

    UFUNCTION(BlueprintCallable)
    void SetMessageVisibility(bool value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMessageSelectionIndex(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageSelection(FName StepName, const TArray<FVGGameEventStepSelectionEntry>& Selection);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageContent(FName StepName, FVGTextSymbol Caption, FVGTextSymbol Message, FName speaker);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdate(FName StepName, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnQueryStepCompletion(FName StepName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndStep(FName StepName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideSelection(FName StepName, int32 SelectionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName OnChangeNextStep(FName CurrentStep);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginStep(FName StepName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMessageVisible() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HasEnvironmentOption(FName Key);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGGameEventBase* GetParentEvent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FString GetEnvironmentOption(FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraActor* GetCameraActor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetActor(FName tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddWaitStep(const FVGGameEventStepCommandWait& Wait);
    
    UFUNCTION(BlueprintCallable)
    void AddMessageStep(const FVGGameEventStepCommandMessage& Message);
    
};

