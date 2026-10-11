#pragma once
#include "CoreMinimal.h"
#include "EVGTeamCategory.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventEnemySpawnEntry.h"
#include "VGGameEventEnemySpawnParam.generated.h"

class AVGAITeam;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventEnemySpawnParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString quest_task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventEnemySpawnEntry> enemy_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> map_teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool suspend_game_on_defeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAITeam> team_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTeamCategory team_category;
    
    FVGGameEventEnemySpawnParam();
};

