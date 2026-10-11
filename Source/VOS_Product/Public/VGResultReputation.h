#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGCharaUnique.h"
#include "VGResultReputation.generated.h"

USTRUCT(BlueprintType)
struct FVGResultReputation : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> chara_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reputation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 activate_condition_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 activate_supress_flag;
    
    VOS_PRODUCT_API FVGResultReputation();
};

