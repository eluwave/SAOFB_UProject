#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGHeroIconLoader.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGHeroIconLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_hero_icon_data_table_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_icon_tex;
    
public:
    UVGHeroIconLoader();

};

