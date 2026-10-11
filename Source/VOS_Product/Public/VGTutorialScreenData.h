#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGTextSymbol.h"
#include "VGTutorialScreenPageData.h"
#include "VGTutorialScreenData.generated.h"

UCLASS(Blueprintable)
class UVGTutorialScreenData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTutorialScreenPageData> Pages;
    
    UVGTutorialScreenData();

};

