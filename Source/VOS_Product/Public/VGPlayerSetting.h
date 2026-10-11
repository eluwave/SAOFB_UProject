#pragma once
#include "CoreMinimal.h"
#include "VGCharacterSetting.h"
#include "VGPlayerSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerSetting : public FVGCharacterSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FVGPlayerSetting();
};

