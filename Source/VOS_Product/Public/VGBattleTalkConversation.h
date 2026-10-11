#pragma once
#include "CoreMinimal.h"
#include "VGBattleTalkQuote.h"
#include "VGBattleTalkConversation.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleTalkConversation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkQuote> quotes;
    
    FVGBattleTalkConversation();
};

