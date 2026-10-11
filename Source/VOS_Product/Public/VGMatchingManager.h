#pragma once
#include "CoreMinimal.h"
#include "VGUIActor.h"
#include "VGMatchingManager.generated.h"

class UVGCoopLobbyListWidget;
class UVGCoopLobbySettingsWidget;
class UVGDialog;
class UVGLobbyModeSelectionWidget;
class UVGNGWordCheckComponent;
class UVGOnlineStartup;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGMatchingManager : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCoopLobbySettingsWidget* m_lobby_creation_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCoopLobbySettingsWidget* m_lobby_edit_search_comment_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCoopLobbySettingsWidget* m_lobby_search_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGLobbyModeSelectionWidget* m_lobby_mode_selection_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCoopLobbyListWidget* m_coop_lobby_list_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_connecting_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_message_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGOnlineStartup* m_online_startup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNGWordCheckComponent* m_ngword_check_component;
    
public:
    AVGMatchingManager(const FObjectInitializer& ObjectInitializer);

};

