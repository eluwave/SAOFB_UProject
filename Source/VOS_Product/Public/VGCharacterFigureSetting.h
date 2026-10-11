#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGCharacterBoneTransform.h"
#include "VGCharacterFigureSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCharacterFigureSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterBoneTransform> Transforms;
    
    UVGCharacterFigureSetting();

};

