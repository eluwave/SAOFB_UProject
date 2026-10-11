#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGDungeonEnemyConfig.generated.h"

class AVGAITeam;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDungeonEnemyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAITeam> enemy_team_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 weight;
    
    FVGDungeonEnemyConfig();
};

