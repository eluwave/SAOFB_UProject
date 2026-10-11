#pragma once
#include "CoreMinimal.h"
#include "VGDungeonPortal.h"
#include "VGDungeonRoomBase.generated.h"

class AVGAITeam;
class AVGDungeon;
class UVGDungeonRoom;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDungeonRoomBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGDungeon* m_dungeon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGDungeonPortal> m_portals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAITeam* m_enemyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGDungeonRoom* m_room;
    
public:
    FVGDungeonRoomBase();
};

