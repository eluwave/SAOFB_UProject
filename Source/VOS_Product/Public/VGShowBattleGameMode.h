#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGBattleOfflineGameMode.h"
#include "VGShowBattleGameMode.generated.h"

class UDataTable;
class UVGAvatarCustomizeSetting;
class UVGQuestRecord;
class UVGTutorialHelpBoardWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGShowBattleGameMode : public AVGBattleOfflineGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_next_situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTutorialHelpBoardWidget> m_tutorial_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_tutorial_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_tutorial_start_wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_quest_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_avater_customize_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_force_time_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_force_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_invalidate_events;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTutorialHelpBoardWidget* m_tutorial_help;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_quest_record;
    
public:
    AVGShowBattleGameMode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteQuest(const UVGQuestRecord* quest);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceGoNextSituation();
    
};

