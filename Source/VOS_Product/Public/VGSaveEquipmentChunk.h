#pragma once
#include "CoreMinimal.h"
#include "VGSaveCharacterEquipmentEntry.h"
#include "VGSaveEquipmentChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveEquipmentChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveCharacterEquipmentEntry> entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveCharacterEquipmentEntry> abyss_dungeon_entries;
    
    FVGSaveEquipmentChunk();
};

