#pragma once
#include "CoreMinimal.h"
#include "EVGMapIconType.generated.h"

UENUM(BlueprintType)
enum class EVGMapIconType : uint8 {
    Player,
    Buddy,
    Enemy,
    UniqueEnemy,
    Boss,
    Neutral,
    NPC,
    Item,
    Treasure,
    Event,
    SubEvent,
    Quest,
    SubQuest,
    MainTarget,
    SubTarget,
    Destination,
    Shop,
    Gossip,
    ItemBox,
    Terminal,
    Transporter,
    MyRoom,
    Squadron,
    Landmark,
    Dungeon,
    Entrance,
    None,
    Num,
};

