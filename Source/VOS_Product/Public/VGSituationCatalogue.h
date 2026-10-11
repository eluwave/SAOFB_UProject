#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGSituationEntry.h"
#include "VGSituationCatalogue.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGSituationCatalogue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_situation_assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSituationEntry> m_situation_data;
    
public:
    UVGSituationCatalogue();

};

