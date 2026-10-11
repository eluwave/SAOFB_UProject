#pragma once
#include "CoreMinimal.h"
#include "EVGActionState.h"
#include "Templates/SubclassOf.h"
#include "VGEmotionListItem.h"
#include "VGEmotionListTab.h"
#include "VGFixedPhraseListItem.h"
#include "VGFixedPhraseListTab.h"
#include "VGTextSymbol.h"
#include "VGUIActor.h"
#include "VGEmotionListAgent.generated.h"

class AVGFreeTextInputAgent;
class UDataTable;
class UVGEmotionListWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGEmotionListAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGEmotionListWidget> m_emotion_list_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGFreeTextInputAgent> m_free_text_input_class;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGActionState> m_emotion_disabled_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_emotion_list_caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_emotion_list_tab_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_emotion_list_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_fixed_phrase_list_caption_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_fixed_phrase_list_tab_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_fixed_phrase_list_tab_data_battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_fixed_phrase_list_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGEmotionListWidget* m_emotion_list_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGEmotionListTab> m_emotion_list_tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGEmotionListItem> m_emotion_list_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGEmotionListWidget* m_fixed_phrase_list_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGFixedPhraseListTab> m_fixed_phrase_list_tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGFixedPhraseListItem> m_fixed_phrase_list_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGFreeTextInputAgent* m_free_text_input_agent;
    
public:
    AVGEmotionListAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

