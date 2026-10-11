#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGAIAssetUtility.generated.h"

class UVGAIAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGAIAssetUtility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_ai_asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIAsset* m_ai_asset;
    
public:
    UVGAIAssetUtility();

};

