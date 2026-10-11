#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGCoopQuestAnnounceAgentMode.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGCoopQuestAnnounceAgent.generated.h"

class UVGCoopQuestDialog;
class UVGQuestRecord;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCoopQuestAnnounceAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_widget_class_references;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCoopQuestDialog> m_coop_quest_start_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCoopQuestDialog> m_coop_quest_countdown_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCoopQuestDialog> m_coop_quest_completion_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCoopQuestDialog> m_coop_quest_fail_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCoopQuestDialog* m_active_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_quest_record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_initialized;
    
public:
    AVGCoopQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Start(EVGCoopQuestAnnounceAgentMode mode);
    
    UFUNCTION(BlueprintCallable)
    void SetQuest(UVGQuestRecord* quest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void Exit();
    
};

