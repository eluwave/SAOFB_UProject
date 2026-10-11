#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "VGInlineTextImageStyle.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FVGInlineTextImageStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_inline_image_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_default_inline_kb_image_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> m_inline_kb_image_table;
    
    VOS_PRODUCT_API FVGInlineTextImageStyle();
};

