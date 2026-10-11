#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateTypes.h"
#include "VGInlineKeyboardImageRecord.generated.h"

USTRUCT(BlueprintType)
struct FVGInlineKeyboardImageRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineTextImageStyle Style;
    
    VOS_PRODUCT_API FVGInlineKeyboardImageRecord();
};

