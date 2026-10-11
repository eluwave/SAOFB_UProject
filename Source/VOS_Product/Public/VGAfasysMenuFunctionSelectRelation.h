#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuFunction.h"
#include "EVGAfasysMenuSelectFunction.h"
#include "VGAfasysMenuFunctionSelectRelation.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysMenuFunctionSelectRelation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuSelectFunction::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGAfasysMenuFunction::Type>> Function;
    
    FVGAfasysMenuFunctionSelectRelation();
};

