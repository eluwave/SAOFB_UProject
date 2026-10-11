#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGCharacterSetup.h"
#include "VGCharacterSetupAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCharacterSetupAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGCharacterSetup setup;
    
    UVGCharacterSetupAsset();

};

