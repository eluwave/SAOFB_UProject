#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGWeaponDivisionIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGWeaponDivisionIcon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FVGWeaponDivisionIcon();
};

