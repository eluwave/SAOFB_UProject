#pragma once
#include "CoreMinimal.h"
#include "VGHeroQuestClearData.h"
#include "VGHeroQuestInfoChunk.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGHeroQuestInfoChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroQuestClearData> solo_clear_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHeroQuestClearData> party_clear_data;
    
    FVGHeroQuestInfoChunk();
};

