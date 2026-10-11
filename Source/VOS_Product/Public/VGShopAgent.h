#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "EVGShopService.h"
#include "EVGShopVoiceID.h"
#include "Templates/SubclassOf.h"
#include "VGShopDesc.h"
#include "VGShopVoiceSetting.h"
#include "VGTextSymbol.h"
#include "VGUIActor.h"
#include "VGShopAgent.generated.h"

class AVGSoundPlaybackHandle;
class AVGSubSceneAgent;
class AVGTutorialScreenAgent;
class UAnimationAsset;
class USoundAtomCueSheet;
class UVGAvatarCustomizeSetting;
class UVGCharacterFigureSetting;
class UVGDialog;
class UVGLipDataPack;
class UVGMedalShopWidget;
class UVGMessageWindow;
class UVGShopActionWidget;
class UVGShopAsset;
class UVGShopInventoryData;
class UVGShopWidget;
class UVGSoundComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGShopAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGShopActionWidget> m_shop_action_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGShopWidget> m_shop_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMedalShopWidget> m_exchange_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDialog> m_exchange_dialog_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGShopWidget> m_appraise_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDialog> m_appraise_effect_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_info_shop_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMessageWindow> m_message_window_class;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_service_text[13];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_help_text_buy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_help_text_sell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_dlg_confirm_purchase;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVGShopVoiceID, FVGShopVoiceSetting> m_shop_voice_definition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_reputation_value[13];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_shop_caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_shop_method_navi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> m_shop_tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGShopDesc> m_shops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_clerk_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_clerk_figure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_clerk_motion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_price_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGShopActionWidget* m_shop_action_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGShopWidget* m_shop_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMedalShopWidget* m_exchange_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGShopWidget* m_appraise_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGShopWidget* m_info_shop_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSubSceneAgent* m_subscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGTutorialScreenAgent* m_tutorial_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSoundPlaybackHandle* m_appraise_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_voice_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGLipDataPack* m_lip_data_pack;
    
public:
    AVGShopAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetShopAsset(UVGShopAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetPriceRate(float value);
    
    UFUNCTION(BlueprintCallable)
    void Provide(EVGShopService::Type service, UVGShopInventoryData* inv, FText Text, FText desc_text);
    
};

