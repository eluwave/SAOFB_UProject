#pragma once
#include "CoreMinimal.h"
#include "VGSaveInventoryItemEntry.h"
#include "VGSaveInventoryItemNPC.h"
#include "VGSaveSlotInventoryChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveSlotInventoryChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveInventoryItemEntry> Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveInventoryItemNPC> unique_npc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveInventoryItemEntry> abyss_dungeon_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveInventoryItemNPC> abyss_dungeon_unique_npc;
    
    FVGSaveSlotInventoryChunk();
};

