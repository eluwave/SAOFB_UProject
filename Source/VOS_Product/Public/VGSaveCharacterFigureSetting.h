#pragma once
#include "CoreMinimal.h"
#include "VGSaveCharacterFigureSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveCharacterFigureSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 generateor_config_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> generator_param;
    
    FVGSaveCharacterFigureSetting();
};

