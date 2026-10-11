#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "VGSaveCommonChunk.h"
#include "VGSaveSlotChunk.h"
#include "VGSaveGame.generated.h"

class UObject;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGSaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveCommonChunk m_common_chunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveSlotChunk> m_slot_chunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_world_context;
    
public:
    UVGSaveGame();

};

