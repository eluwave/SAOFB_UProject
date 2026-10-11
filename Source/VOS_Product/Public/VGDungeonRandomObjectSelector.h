#pragma once
#include "CoreMinimal.h"
#include "VGDungeonRandomObject.h"
#include "VGDungeonRandomObjectSelector.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDungeonRandomObjectSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDungeonRandomObject> Items;
    
    FVGDungeonRandomObjectSelector();
};

