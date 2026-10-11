#pragma once
#include "CoreMinimal.h"
#include "VGPlayerCardData.h"
#include "VGPlayerCard.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGPlayerCardData my_card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPlayerCardData> received_cards;
    
    FVGPlayerCard();
};

