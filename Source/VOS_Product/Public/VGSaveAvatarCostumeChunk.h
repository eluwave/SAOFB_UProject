#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGSaveAvatarCostumeBlock.h"
#include "VGSaveAvatarCostumeChunk.generated.h"

USTRUCT(BlueprintType)
struct FVGSaveAvatarCostumeChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveAvatarCostumeBlock costume;
    
    VOS_PRODUCT_API FVGSaveAvatarCostumeChunk();
};

