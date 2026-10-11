#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAdditionalContent.h"
#include "VGAdditionalContentAsset.generated.h"

UCLASS(Blueprintable)
class UVGAdditionalContentAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAdditionalContent> contents;
    
    UVGAdditionalContentAsset();

};

