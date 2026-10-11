#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGSkillAssetList.generated.h"

class UVGSkillAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSkillAssetList : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGSkillAsset*> assets;
    
public:
    UVGSkillAssetList();

};

