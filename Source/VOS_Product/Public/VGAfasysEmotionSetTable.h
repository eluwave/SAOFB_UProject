#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGAfasysEmotionSetTable.generated.h"

class UVGAfasysEmotionSetAsset;

USTRUCT(BlueprintType)
struct FVGAfasysEmotionSetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAfasysEmotionSetAsset* emotion_set;
    
    VOS_PRODUCT_API FVGAfasysEmotionSetTable();
};

