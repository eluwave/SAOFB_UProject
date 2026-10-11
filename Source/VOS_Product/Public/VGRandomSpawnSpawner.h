#pragma once
#include "CoreMinimal.h"
#include "EVGGameDifficulty.h"
#include "VGRandomSpawnSpawner.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGRandomSpawnSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameDifficulty difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 spawn_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 spawn_max;
    
    FVGRandomSpawnSpawner();
};

