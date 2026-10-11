#pragma once
#include "CoreMinimal.h"
#include "EVGStaffRollItemType.h"
#include "Templates/SubclassOf.h"
#include "VGStaffRollItemWidgetClass.generated.h"

class UVGStaffRollItemWidget;

USTRUCT(BlueprintType)
struct FVGStaffRollItemWidgetClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStaffRollItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGStaffRollItemWidget> widget_class;
    
    VOS_PRODUCT_API FVGStaffRollItemWidgetClass();
};

