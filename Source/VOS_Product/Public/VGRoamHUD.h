#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGHUD.h"
#include "VGRoamHUD.generated.h"

class AVGEmotionListAgent;
class AVGMapSystem;
class AVGSubSceneAgent;
class UVGDialog;
class UVGMainMenuWidget;
class UVGNavigationBar;
class UVGQuestInfoWidget;
class UVGRoamBackHUDWidget;
class UVGRoamHUDWidget;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class AVGRoamHUD : public AVGHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGRoamHUDWidget* m_roam_hud_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGRoamBackHUDWidget* m_roam_back_hud_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuWidget* m_main_menu_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMainMenuWidget> m_main_menu_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGMapSystem* m_map_system;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGMapSystem> m_map_system_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGEmotionListAgent* m_emotion_list_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGEmotionListAgent> m_emotion_list_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGEmotionListAgent* m_online_emotion_list_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGEmotionListAgent> m_online_emotion_list_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGQuestInfoWidget* m_quest_info_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSubSceneAgent* m_subscene_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGSubSceneAgent> m_subscene_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_subscene_created;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNavigationBar* m_navigation_bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_blur_effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_blur_effect_ref;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_emotion_list_is_valid;
    
public:
    AVGRoamHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGRoamHUDWidget* GetRoamHUDWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGRoamBackHUDWidget* GetRoamBackHUDWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGQuestInfoWidget* GetQuestInfoWidget() const;
    
};

