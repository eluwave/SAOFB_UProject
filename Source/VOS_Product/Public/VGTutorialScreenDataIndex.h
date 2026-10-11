#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGTutorialScreenPageDataEntry.h"
#include "VGTutorialScreenDataIndex.generated.h"

UCLASS(Blueprintable)
class UVGTutorialScreenDataIndex : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTutorialScreenPageDataEntry> entries;
    
    UVGTutorialScreenDataIndex();

};

