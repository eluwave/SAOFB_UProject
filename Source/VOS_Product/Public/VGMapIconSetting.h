#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGMapIconInfo.h"
#include "VGMapIconSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMapIconSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMapIconInfo> Icon;
    
    UVGMapIconSetting();

};

