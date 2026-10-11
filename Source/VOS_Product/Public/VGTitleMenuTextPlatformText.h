#pragma once
#include "CoreMinimal.h"
#include "EVGTitleMenuPlatformType.h"
#include "VGTitleMenuTextPlatformText.generated.h"

USTRUCT(BlueprintType)
struct FVGTitleMenuTextPlatformText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGTitleMenuPlatformType::Type> platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    VOS_PRODUCT_API FVGTitleMenuTextPlatformText();
};

