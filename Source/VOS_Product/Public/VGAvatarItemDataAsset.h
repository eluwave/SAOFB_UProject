#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAvatarItemDefinition.h"
#include "VGAvatarItemDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAvatarItemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarItemDefinition> item_definitions;
    
    UVGAvatarItemDataAsset();

};

