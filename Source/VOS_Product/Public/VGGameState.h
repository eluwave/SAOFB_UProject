#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "EVGGameType.h"
#include "VGGameState.generated.h"

class AVGDropItemParamInfo;
class AVGGameEventSupervisor;
class AVGLevelSequenceActor;
class UVGCharacterManager;
class UVGDialog;
class UVGMeshMaterialOverrideManagerTicker;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameType m_game_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_enable_invite_travel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_auto_fade_disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_enable_fps_check;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_is_fps_check_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_is_fps_check_interval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_has_game_started;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString m_situation_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> m_exclusive_sublevel_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterManager* m_character_manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGGameEventSupervisor* m_event_supervisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGDropItemParamInfo* m_drop_item_param_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGLevelSequenceActor* m_level_sequence_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_sys_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGMeshMaterialOverrideManagerTicker* m_mmo_ticker;
    
public:
    AVGGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnGameHasStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGameStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGGameType GetGameType() const;
    
};

