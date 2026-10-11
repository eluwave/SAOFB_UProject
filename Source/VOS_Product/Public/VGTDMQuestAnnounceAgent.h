#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGTDMQuestAnnounceAgentMode.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGTDMQuestAnnounceAgent.generated.h"

class UVGQuestRecord;
class UVGTDMQuestDialog;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGTDMQuestAnnounceAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_widget_class_references;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTDMQuestDialog> m_tdm_quest_start_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTDMQuestDialog> m_tdm_quest_countdown_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTDMQuestDialog> m_tdm_quest_completion_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTDMQuestDialog> m_tdm_quest_fail_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTDMQuestDialog* m_active_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_quest_record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_initialized;
    
public:
    AVGTDMQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Start(EVGTDMQuestAnnounceAgentMode mode);
    
    UFUNCTION(BlueprintCallable)
    void SetQuest(UVGQuestRecord* quest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void Exit();
    
};

