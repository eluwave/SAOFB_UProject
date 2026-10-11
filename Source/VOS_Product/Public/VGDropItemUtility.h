#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGDropItemUtility.generated.h"

class UVGDropItemAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGDropItemUtility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_drop_item_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGDropItemAsset* m_drop_item;
    
public:
    UVGDropItemUtility();

};

