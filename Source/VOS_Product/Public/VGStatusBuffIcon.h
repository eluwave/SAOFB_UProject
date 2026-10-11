#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGStatusBuffIconItem.h"
#include "VGStatusBuffIcon.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGStatusBuffIcon : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusBuffIconItem> icons;
    
    UVGStatusBuffIcon();

};

