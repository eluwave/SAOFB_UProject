#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "VGPlayerIndex.h"
#include "VGPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGPlayerState : public APlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVGPlayerIndex m_player_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_is_match_ready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_is_game_ready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_is_fade_out_complete;
    
public:
    AVGPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetMatchReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetGameReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetFadeOutComplete();
    
};

