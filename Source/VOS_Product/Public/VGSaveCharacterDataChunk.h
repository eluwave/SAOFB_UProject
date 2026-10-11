#pragma once
#include "CoreMinimal.h"
#include "VGSaveAbyssDungeronCharacterDataBlock.h"
#include "VGSaveCharacterDataBlock.h"
#include "VGSaveCharacterDataChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveCharacterDataChunk {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveCharacterDataBlock characters[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveAbyssDungeronCharacterDataBlock abyss_dungeon_characters[2];
    
    FVGSaveCharacterDataChunk();
};

