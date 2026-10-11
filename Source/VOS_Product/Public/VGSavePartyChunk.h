#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGSaveDLCParty.h"
#include "VGSavePartyChunk.generated.h"

USTRUCT(BlueprintType)
struct FVGSavePartyChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> player_mode_member;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> kirito_mode_member;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveDLCParty> dlc_mode_member;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> abyss_mode_member;
    
    VOS_PRODUCT_API FVGSavePartyChunk();
};

