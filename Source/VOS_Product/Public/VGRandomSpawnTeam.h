#pragma once
#include "CoreMinimal.h"
#include "EVGGameDifficulty.h"
#include "VGRandomSpawnTeam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGRandomSpawnTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameDifficulty difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 team_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 team_max;
    
    FVGRandomSpawnTeam();
};

