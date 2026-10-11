#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGBRQuestAnnounceAgentMode.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGBRQuestAnnounceAgent.generated.h"

class UVGBRQuestDialog;
class UVGQuestRecord;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBRQuestAnnounceAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_widget_class_references;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGBRQuestDialog> m_quest_start_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGBRQuestDialog> m_quest_countdown_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGBRQuestDialog> m_quest_completion_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGBRQuestDialog> m_quest_fail_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGBRQuestDialog* m_active_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_quest_record;
    
public:
    AVGBRQuestAnnounceAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Start(EVGBRQuestAnnounceAgentMode mode);
    
    UFUNCTION(BlueprintCallable)
    void SetQuest(UVGQuestRecord* quest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void Exit();
    
};

