#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGAdditionalContentCatalogue.generated.h"

class UVGAdditionalContentAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGAdditionalContentCatalogue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_content_definition_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAdditionalContentAsset* m_content_definition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_debug_enabled_dlc;
    
public:
    UVGAdditionalContentCatalogue();

};

