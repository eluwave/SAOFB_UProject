#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGAfasysMenuAgent.generated.h"

class AVGAfasysAdventureAgent;
class AVGAfasysMenuAI;
class AVGAfasysMenuCharacter;
class AVGAfasysMenuCoordinate;
class AVGAfasysMenuEmotion;
class AVGAfasysMenuFundManagement;
class AVGAfasysMenuSelect;
class UVGMessageWindow;
class UVGSelectionWindow;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysMenuAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMessageWindow> m_message_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGSelectionWindow> m_selection_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAfasysMenuSelect> m_afasys_menu_select_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAfasysMenuEmotion> m_afasys_menu_emotion_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAfasysMenuFundManagement> m_afasys_menu_fund_management_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAfasysMenuAI> m_afasys_menu_ai_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAfasysMenuCoordinate> m_afasys_menu_coordinate_class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysAdventureAgent* m_adventure_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuSelect* m_afasys_select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuEmotion* m_afasys_emotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuFundManagement* m_afasys_fund_management;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuAI* m_afasys_ai;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuCoordinate* m_afasys_coordinate;
    
public:
    AVGAfasysMenuAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TalkEnd();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(AVGAfasysMenuCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTalkEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStepEndCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSetTextCallback(int32 voice_id, int32 action_id);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedIndexChangeCallback(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedDecideCallback(int32 index, const FString& tag);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedCancelCallback(const FString& tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraChange();
    
    UFUNCTION(BlueprintCallable)
    bool IsTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCameraChange();
    
    UFUNCTION(BlueprintCallable)
    AVGAfasysMenuCharacter* GetCharacter();
    
};

