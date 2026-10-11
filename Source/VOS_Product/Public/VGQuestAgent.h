#pragma once
#include "CoreMinimal.h"
#include "EVGQuestAgentMode.h"
#include "EVGQuestCategory.h"
#include "Templates/SubclassOf.h"
#include "VGTextSymbol.h"
#include "VGUIActor.h"
#include "VGQuestAgent.generated.h"

class UVGDialog;
class UVGQuestDialog;
class UVGQuestRecord;
class UVGQuestWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGQuestAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGQuestWidget> m_quest_browse_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGQuestDialog> m_quest_undertake_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_quest_discard_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_quest_not_discard_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_quest_retire_text;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_quest_state_text[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_quest_empty_text[7];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGQuestWidget* m_quest_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGQuestDialog* m_quest_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGQuestRecord*> m_quest_src;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGQuestRecord*> m_quest_entries;
    
public:
    AVGQuestAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start(EVGQuestAgentMode::Type mode, int32 param);
    
    UFUNCTION(BlueprintCallable)
    void SetQuests(const TArray<UVGQuestRecord*>& quests);
    
    UFUNCTION(BlueprintCallable)
    void SetQuest(UVGQuestRecord* quest);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryFilter(int32 filterFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCaption(FText Caption);
    
    UFUNCTION(BlueprintCallable)
    void ResetCategoryFilter();
    
    UFUNCTION(BlueprintCallable)
    void Exit();
    
    UFUNCTION(BlueprintCallable)
    void AddCategoryFilter(EVGQuestCategory::Type Filter);
    
};

