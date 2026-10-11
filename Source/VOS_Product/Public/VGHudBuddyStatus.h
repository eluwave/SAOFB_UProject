#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineVoiceStateType.h"
#include "VGHudStatusBase.h"
#include "VGHudBuddyStatus.generated.h"

class UDataTable;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudBuddyStatus : public UVGHudStatusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_character_role_icon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_RoleIcon;
    
public:
    UVGHudBuddyStatus();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowVoiceIcon(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVoiceState(EVPOnlineVoiceStateType State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Alive();
    
};

