#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGSequencialSubtitleData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSequencialSubtitleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SerifID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    FVGSequencialSubtitleData();
};

