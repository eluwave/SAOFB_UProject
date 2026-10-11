#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGGameEventBase.generated.h"

class AActor;
class AVGGameEventLocator;
class AVGGameEventSupervisor;

UCLASS(Blueprintable)
class UVGGameEventBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGGameEventSupervisor* m_supervisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGGameEventLocator* m_locator;
    
public:
    UVGGameEventBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSuspend();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldResume();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestToStop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostEndEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLaunch(AActor* SpawnActor, AVGGameEventLocator* locator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndContact();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginFirstContact();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginEvent(bool IsExclusive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginContact();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndEventWithTransition();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBeginEventExclusive();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBeginEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLaunchable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGGameEventLocator* GetLocator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEventId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActor() const;
    
};

