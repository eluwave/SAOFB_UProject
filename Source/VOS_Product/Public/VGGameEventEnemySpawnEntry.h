#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventEnemySpawnEntry.generated.h"

class AVGAISpawner;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventEnemySpawnEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAISpawner> spawner_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> locators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool keep_alive_on_cleanup;
    
    FVGGameEventEnemySpawnEntry();
};

