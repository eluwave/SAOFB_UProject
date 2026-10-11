#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGBasicStatus.h"
#include "VGSaveInventoryAccessoryParam.h"
#include "VGHeroStruggleStatusSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleStatusSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGBasicStatus basic_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveInventoryAccessoryParam acc1_passive_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveInventoryAccessoryParam acc2_passive_param;
    
    VOS_PRODUCT_API FVGHeroStruggleStatusSetting();
};

