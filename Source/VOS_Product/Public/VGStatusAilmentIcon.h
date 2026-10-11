#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGStatusAilmentIconItem.h"
#include "VGStatusAilmentIcon.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGStatusAilmentIcon : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusAilmentIconItem> icons;
    
    UVGStatusAilmentIcon();

};

