#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGQuestInfoWidget.generated.h"

class UVGQuestAsset;
class UVGQuestRecord;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGQuestInfoWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestAsset* m_quest_asset;
    
public:
    UVGQuestInfoWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetQuest(bool is_set);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetNextTask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyTask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndNotifyTask();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotifyMainQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCurrentQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNotifyTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNotifyBody() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentTask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentQuestTitle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FlipTaskText();
    
};

