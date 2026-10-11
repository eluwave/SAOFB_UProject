#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateTypes.h"
#include "VGInlineTextImageRecord.generated.h"

USTRUCT(BlueprintType)
struct FVGInlineTextImageRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineTextImageStyle Style;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineTextImageStyle style_ps4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineTextImageStyle style_xb1;
    
    VOS_PRODUCT_API FVGInlineTextImageRecord();
};

