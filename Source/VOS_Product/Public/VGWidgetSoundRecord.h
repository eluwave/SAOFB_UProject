#pragma once
#include "CoreMinimal.h"
#include "EVGSoundType.h"
#include "VGWidgetSoundRecord.generated.h"

USTRUCT(BlueprintType)
struct FVGWidgetSoundRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGSoundType::Type> Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    VOS_PRODUCT_API FVGWidgetSoundRecord();
};

