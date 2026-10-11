#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGSoundData.generated.h"

USTRUCT(BlueprintType)
struct FVGSoundData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    VOS_PRODUCT_API FVGSoundData();
};

