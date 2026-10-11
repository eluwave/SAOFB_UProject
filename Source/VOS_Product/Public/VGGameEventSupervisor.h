#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGGameEventRuntimeEntry.h"
#include "VGGameEventSupervisor.generated.h"

class UVGDeferredAutoEventLauncher;
class UVGDialog;
class UVGGameEventEntryDataAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API AVGGameEventSupervisor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGGameEventEntryDataAsset*> m_entry_data_assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventRuntimeEntry> m_active_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_auto_events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_skip_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGDeferredAutoEventLauncher* m_deferred_event_launcher;
    
public:
    AVGGameEventSupervisor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void onTransitionStart();
    
};

