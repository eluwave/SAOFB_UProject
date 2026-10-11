#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EQuestWidgetState.h"
#include "QuestWidgetItem.h"
#include "VGWidget.h"
#include "VGQuestWidget.generated.h"

class UTexture2D;
class UVGQuestDetailsPanel;
class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGQuestWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGQuestDetailsPanel* m_ui_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestWidgetItem> m_quests;
    
public:
    UVGQuestWidget();

    UFUNCTION(BlueprintCallable)
    void OpenQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMode(EQuestWidgetState State);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewImageUpdated(UTexture2D* Image);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetInfoVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetBGVisibility() const;
    
};

