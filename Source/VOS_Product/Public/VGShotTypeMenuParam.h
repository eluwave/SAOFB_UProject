#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGWeaponCockType.h"
#include "EVGWeaponTriggerType.h"
#include "VGTextSymbol.h"
#include "VGShotTypeMenuParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGShotTypeMenuParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponTriggerType trigger_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponCockType cock_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Text;
    
    FVGShotTypeMenuParam();
};

