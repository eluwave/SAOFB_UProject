#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "Templates/SubclassOf.h"
#include "VGEQG_ProjectedHex.h"
#include "VGEQG_PathingHex.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGEQG_PathingHex : public UVGEQG_ProjectedHex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue PathToItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScanRangeMultiplier;
    
    UVGEQG_PathingHex();

};

