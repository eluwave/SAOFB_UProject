#pragma once
#include "CoreMinimal.h"
#include "VGCharacterSetting.h"
#include "VGAfasysSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysSetting : public FVGCharacterSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ai_customize[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 emotion_customize[8];
    
    FVGAfasysSetting();
};

