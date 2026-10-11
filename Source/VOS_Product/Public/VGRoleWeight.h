#pragma once
#include "CoreMinimal.h"
#include "EVGCharaRole.h"
#include "VGRoleWeight.generated.h"

USTRUCT(BlueprintType)
struct FVGRoleWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 weight;
    
    VOS_PRODUCT_API FVGRoleWeight();
};

