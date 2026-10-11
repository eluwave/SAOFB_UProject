#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"
#include "VGDialog.h"
#include "VGQuestDialog.generated.h"

class AVGMapAgent;
class UVGQuestDetailsPanel;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGQuestDialog : public UVGDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGMapAgent> m_map_agent_class;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGQuestDetailsPanel* m_ui_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_quest_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGMapAgent* m_map_agent;
    
public:
    UVGQuestDialog();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetRewardVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRewardText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetInfoVisibility() const;
    
};

