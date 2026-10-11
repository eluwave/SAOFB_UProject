#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Misc/StringClassReference.h"
#include "Engine/GameViewportClient.h"
#include "VGGameViewportClient.generated.h"

class UObject;
class UVGDialog;
class UVGGameEventPromptWidget;
class UVGPad;
class UVGScreenEffectSupervisor;

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Game)
class VOS_PRODUCT_API UVGGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGPad*> Pads;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGScreenEffectSupervisor* m_screen_effect_supervisor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_game_event_prompt_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGGameEventPromptWidget* m_game_event_prompt_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_debug_command;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_pad_ui_input_asset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_kbd_ui_input_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_temp_dialog;
    
public:
    UVGGameViewportClient();

    UFUNCTION(BlueprintCallable)
    void SetTemporaryDialogHandle(UVGDialog* Instance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGDialog* GetTemporaryDialogHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
};

