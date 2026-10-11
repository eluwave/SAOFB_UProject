#pragma once
#include "CoreMinimal.h"
#include "VGPlayerSetting.h"
#include "VGPlayerState.h"
#include "VGCharacterPlayerState.generated.h"

class AVGCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCharacterPlayerState : public AVGPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVGPlayerSetting m_setting;
    
public:
    AVGCharacterPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCharacter(AVGCharacter* Chara);
    
};

