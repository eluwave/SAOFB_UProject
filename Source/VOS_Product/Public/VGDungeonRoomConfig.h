#pragma once
#include "CoreMinimal.h"
#include "VGDungeonEnemyConfig.h"
#include "VGDungeonPassageConfig.h"
#include "VGDungeonRoomConfig.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDungeonRoomConfig : public FVGDungeonPassageConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDungeonEnemyConfig> enemy_team;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 room_area;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 room_width;
    
    FVGDungeonRoomConfig();
};

