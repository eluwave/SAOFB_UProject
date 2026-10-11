#pragma once
#include "CoreMinimal.h"
#include "VGGameplayData.h"
#include "VGInventoryData.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGInventoryData : public UVGGameplayData {
    GENERATED_BODY()
public:
    UVGInventoryData();

};

