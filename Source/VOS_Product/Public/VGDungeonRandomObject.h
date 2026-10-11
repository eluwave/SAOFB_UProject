#pragma once
#include "CoreMinimal.h"
#include "VGDungeonRandomObject.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDungeonRandomObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 weight;
    
    FVGDungeonRandomObject();
};

