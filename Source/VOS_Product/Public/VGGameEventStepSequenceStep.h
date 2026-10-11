#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandActorTransform.h"
#include "VGGameEventStepCommandAnimation.h"
#include "VGGameEventStepCommandCamera.h"
#include "VGGameEventStepCommandFCBindCharacter.h"
#include "VGGameEventStepCommandFCIntrplWindowProperty.h"
#include "VGGameEventStepCommandFCSetBackgroundImage.h"
#include "VGGameEventStepCommandFCSetWindowProperty.h"
#include "VGGameEventStepCommandMessage.h"
#include "VGGameEventStepCommandNextStep.h"
#include "VGGameEventStepCommandPlayLevelSequence.h"
#include "VGGameEventStepCommandPlayMovie.h"
#include "VGGameEventStepCommandReportQuestTask.h"
#include "VGGameEventStepCommandScreenFade.h"
#include "VGGameEventStepCommandSetScreenImage.h"
#include "VGGameEventStepCommandStartQuest.h"
#include "VGGameEventStepCommandTutorialScreen.h"
#include "VGGameEventStepCommandUnlockAchievement.h"
#include "VGGameEventStepCommandVisibility.h"
#include "VGGameEventStepCommandWait.h"
#include "VGGameEventStepSequenceCommandPlaySound.h"
#include "VGGameEventStepSequenceCommandShopData.h"
#include "VGGameEventStepSequenceCommandShowMail.h"
#include "VGGameEventStepSequenceStep.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepSequenceStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> step_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandScreenFade> screen_fades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandMessage> messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandAnimation> animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandActorTransform> actor_transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandVisibility> visibilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandCamera> cameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandNextStep> next_steps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandWait> waits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandTutorialScreen> tutorial_screens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandPlayLevelSequence> play_level_sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandPlayMovie> play_movies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandStartQuest> start_quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandReportQuestTask> report_quest_tasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandSetScreenImage> set_screen_images;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandUnlockAchievement> unlock_achievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepSequenceCommandPlaySound> play_sounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepSequenceCommandShopData> shop_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepSequenceCommandShowMail> show_mail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandFCSetBackgroundImage> fc_set_bg_images;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandFCBindCharacter> fc_bind_chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandFCSetWindowProperty> fc_set_window_properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandFCIntrplWindowProperty> fc_intrpl_window_properties;
    
    FVGGameEventStepSequenceStep();
};

