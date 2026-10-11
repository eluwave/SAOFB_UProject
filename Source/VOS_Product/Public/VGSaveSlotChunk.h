#pragma once
#include "CoreMinimal.h"
#include "VGSaveAfasysDataChunk.h"
#include "VGSaveCharacterDataChunk.h"
#include "VGSaveEquipmentChunk.h"
#include "VGSaveMapChunk.h"
#include "VGSavePartyChunk.h"
#include "VGSavePlayRecordChunk.h"
#include "VGSaveProgressChunk.h"
#include "VGSaveQuestChunk.h"
#include "VGSaveReputationChunk.h"
#include "VGSaveShopChunk.h"
#include "VGSaveSlotInventoryChunk.h"
#include "VGSaveSlotChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveSlotChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSavePlayRecordChunk play_record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveCharacterDataChunk Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveEquipmentChunk equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveSlotInventoryChunk inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveProgressChunk progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSavePartyChunk Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveReputationChunk reputation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveQuestChunk quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveAfasysDataChunk afasys_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveShopChunk shop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveMapChunk Map;
    
    FVGSaveSlotChunk();
};

