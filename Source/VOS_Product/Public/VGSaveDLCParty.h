#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGSaveDLCParty.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveDLCParty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dlc_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> member;
    
    VOS_PRODUCT_API FVGSaveDLCParty();
};

