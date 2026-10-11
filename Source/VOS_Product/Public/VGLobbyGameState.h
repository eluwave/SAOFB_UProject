#pragma once
#include "CoreMinimal.h"
#include "VGGameState.h"
#include "VGLobbyGameState.generated.h"

class UVGDetectLossConnectionComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGLobbyGameState : public AVGGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGDetectLossConnectionComponent* m_detect_loss_component;
    
public:
    AVGLobbyGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetFreeInputText(const FString& Name, const FString& String, const FString& unique_id);
    
};

