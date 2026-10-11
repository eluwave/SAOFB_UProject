#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGMapObjectData.h"
#include "VGMapFixedObjectSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMapFixedObjectSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMapObjectData> Object;
    
    UVGMapFixedObjectSetting();

};

